#include "SkCanvas.h"
#include "SkGraphics.h"
#include "SkImageEncoder.h"
#include "SkString.h"

int main(int argc, char** argv) {
    SkAutoGraphics ag;

    //Output filename
    SkString filename("image.png");

    //Set Image Width & Height
    SkScalar width = 800;
    SkScalar height = 600;

    SkBitmap bitmap;
    bitmap.allocPixels(SkImageInfo::MakeN32Premul(width,height));

    //Create Canvas
    SkCanvas canvas(bitmap);
    canvas.drawARGB(255, 101, 33, 131);


    SkPaint paint;

    //Set Text ARGB Color
    paint.setARGB(255, 255, 255, 255);

    //Turn AntiAliasing On
    paint.setAntiAlias(true);

    //Set Text Size
    paint.setTextSize(SkIntToScalar(30));

    //Text X, Y Position Varibles
    SkScalar x = 80;
    SkScalar y = 60;

    //Set Text To Draw
    SkString text("Hello, World");

    canvas.drawText(text.c_str(), text.size(), x, y, paint);


    //Set Style and Stroke Width
    paint.setStyle(SkPaint::kStroke_Style);
    paint.setStrokeWidth(10);

    //Draw A Rectangle
    SkRect rect;
    paint.setARGB(255, 0, 0, 0);
    //Left, Top, Right, Bottom
    rect.set(50, 100, 200, 200);
    canvas.drawRoundRect(rect, 20, 20, paint);


    //Draw A Line
    canvas.drawLine(10, 300, 300, 300, paint);


    //Draw Circle (X, Y, Size, Paint)
    canvas.drawCircle(100, 400, 50, paint);

    //Same Image  (file, bitmap, image_type, quality)
    SkImageEncoder::EncodeFile(filename.c_str(), bitmap, SkImageEncoder::kBMP_Type, 100);

    return 0;
}
