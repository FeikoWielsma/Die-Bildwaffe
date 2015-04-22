/*
 * Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

using System.Drawing;
using System.Drawing.Imaging;

namespace FaceRecognitionGUI {
    class VisionDLL {






       
        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "getDLLExecutionTask",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr getDLLExecutionTask(IntPtr image);


        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "freeDLLExecutionTask",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        public static extern void freeDLLExecutionTask(IntPtr task);



        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
            EntryPoint = "setImageImplementation",
            ExactSpelling = false,
            CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern void setImageImplementation([MarshalAs(UnmanagedType.I1)] bool student);




        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "executePreProcessingStep1",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executePreProcessingStep1(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);


        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "executePreProcessingStep2",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executePreProcessingStep2(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);



        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "executePreProcessingStep3",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executePreProcessingStep3(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);




        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "executePreProcessingStep4",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executePreProcessingStep4(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);





        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
             EntryPoint = "getResultPreProcessingStep1",
             ExactSpelling = false,
             CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr getResultPreProcessingStep1(IntPtr task);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
             EntryPoint = "getResultPreProcessingStep2",
             ExactSpelling = false,
             CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr getResultPreProcessingStep2(IntPtr task);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
             EntryPoint = "getResultPreProcessingStep3",
             ExactSpelling = false,
             CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr getResultPreProcessingStep3(IntPtr task);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
             EntryPoint = "getResultPreProcessingStep4",
             ExactSpelling = false,
             CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr getResultPreProcessingStep4(IntPtr task);









        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
              EntryPoint = "prepareLocalization",
              ExactSpelling = false,
              CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool prepareLocalization(IntPtr task);




        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executeLocalizationStep1",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeLocalizationStep1(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executeLocalizationStep2",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeLocalizationStep2(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executeLocalizationStep3",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeLocalizationStep3(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executeLocalizationStep4",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeLocalizationStep4(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executeLocalizationStep5",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeLocalizationStep5(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);


        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
             EntryPoint = "getLocalizationDebugImage",
             ExactSpelling = false,
             CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr getLocalizationDebugImage(IntPtr task);














        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
             EntryPoint = "prepareExtraction",
             ExactSpelling = false,
             CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool prepareExtraction(IntPtr task);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
            EntryPoint = "executeExtractionStep1",
            ExactSpelling = false,
            CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeExtractionStep1(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executeExtractionStep2",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
               [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeExtractionStep2(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executeExtractionStep3",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
               [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeExtractionStep3(IntPtr task, [MarshalAs(UnmanagedType.I1)] bool student);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
             EntryPoint = "getExtractionDebugImage",
             ExactSpelling = false,
             CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr getExtractionDebugImage(IntPtr task);








        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executePostProcessing",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executePostProcessing(IntPtr task);


        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "executeRepresentation",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern bool executeRepresentation(IntPtr task);



        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
               EntryPoint = "getFacialParameters",
               ExactSpelling = false,
               CallingConvention = CallingConvention.Cdecl)]
        [return: MarshalAs(UnmanagedType.I1)]
        public static extern void getFacialParameters(IntPtr task, double[] facialParameters);

















        //Dll method whichs creates a new image on the C++ side and returns a pointer to it
        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "getRGBImageFromData",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr getRGBImageFromData(int width, int height, IntPtr pixels, int stride);






        //Dll method whichs gets the version of the dll
        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                 EntryPoint = "getVersion",
                 ExactSpelling = false,
                 CallingConvention = CallingConvention.Cdecl)]
        public static extern int getVersion();




        /*
         * Image methods
         */
        //Dll method whichs creates a new image on the C++ side and returns a pointer to it
        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "imageNewRGB",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr imageNewRGB(int width, int height);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "imageFreeRGB",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        public static extern void imageFreeRGB(IntPtr image);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "imageWidth",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        public static extern int imageWidth(IntPtr image);

        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
                EntryPoint = "imageHeight",
                ExactSpelling = false,
                CallingConvention = CallingConvention.Cdecl)]
        public static extern int imageHeight(IntPtr image);





        //Dll method whichs gets the pixels from a native c++ created image
        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
            EntryPoint = "getImageBytes",
            ExactSpelling = false,
            CallingConvention = CallingConvention.Cdecl)]
        public static extern void getImageBytes(IntPtr image, IntPtr pixels, int stride);


        //Method whichs opens a file in a native OpenCV window
        [DllImport("../../../../ExternalDll/Debug/ExternalDLL.dll",
            EntryPoint = "openImageWithOpenCV",
            ExactSpelling = false,
            CallingConvention = CallingConvention.Cdecl)]
        public static extern void openImageWithOpenCV([In] String arg);












        public static IntPtr getRGBImageFromBitmap(Bitmap bitmap) {
            IntPtr rgbImage;

            unsafe
            {
                BitmapData data = bitmap.LockBits(new Rectangle(0, 0, bitmap.Width, bitmap.Height), ImageLockMode.ReadWrite, PixelFormat.Format24bppRgb);


                IntPtr ptr = data.Scan0;

                Console.WriteLine("stride: " + data.Stride);

                int bytes = Math.Abs(data.Stride) * bitmap.Height;
                Console.WriteLine("bytes: " + bytes);

                byte[] rgbValues = new byte[bytes];

                // Copy the RGB values into the array.
                Marshal.Copy(ptr, rgbValues, 0, bytes);

                fixed (byte* bytePtr = rgbValues)
                {
                    rgbImage = getRGBImageFromData(bitmap.Width, bitmap.Height, (IntPtr)bytePtr, data.Stride);
                }

                // Copy the RGB values back to the bitmap
                //Marshal.Copy(rgbValues, 0, ptr, bytes);

                bitmap.UnlockBits(data);
            }
            return rgbImage;
        }

























        //Method to get a c# Bitmap from a native C++ image pointer
        //DONT USE, HARDCODED!
        public static Bitmap getBitmapFromRGBImage(IntPtr image){


            Console.WriteLine("pointer c#: " + image);
            
            int width = VisionDLL.imageWidth(image);
            int height = VisionDLL.imageHeight(image);

            Console.WriteLine("width: " + width);
            Console.WriteLine("Height: " + height);



            Bitmap bitmap = new Bitmap(width, height, PixelFormat.Format24bppRgb);

            unsafe {
                BitmapData data = bitmap.LockBits(new Rectangle(0, 0, bitmap.Width, bitmap.Height), ImageLockMode.ReadWrite, PixelFormat.Format24bppRgb);


                IntPtr ptr = data.Scan0;

                Console.WriteLine("stride: " + data.Stride);

                int bytes = Math.Abs(data.Stride) * bitmap.Height;
                Console.WriteLine("bytes: " + bytes);

                byte[] rgbValues = new byte[bytes];

                // Copy the RGB values into the array.
                Marshal.Copy(ptr, rgbValues, 0, bytes);

                fixed (byte* bytePtr = rgbValues){
                    getImageBytes(image, (IntPtr) bytePtr, data.Stride);
                }

                // Copy the RGB values back to the bitmap
                Marshal.Copy(rgbValues, 0, ptr, bytes);

                bitmap.UnlockBits(data);
            }
            return bitmap;
        }

    }
}
