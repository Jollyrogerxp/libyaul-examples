#include <sega3d.h>

#define GRaddr 0

static POINT point_model_3[] = {
        POStoFIXED( 0.00000e+00,-3.12500e-01,-2.00000e+00),
        POStoFIXED( 0.00000e+00,-1.25000e-01,-2.00000e+00),
        POStoFIXED(-4.58984e-01,-2.92969e-01,-1.78857e+00),
        POStoFIXED(-4.58984e-01,-1.05469e-01,-1.78857e+00),
        POStoFIXED(-3.97361e-01, 1.27662e-01,-1.76999e+00),
        POStoFIXED(-2.33742e-01, 2.96156e-01,-1.76115e+00),
        POStoFIXED( 0.00000e+00, 3.60992e-01,-1.74639e+00),
        POStoFIXED( 2.31192e-01, 2.94881e-01,-1.75860e+00),
        POStoFIXED( 3.96087e-01, 1.25112e-01,-1.76871e+00),
        POStoFIXED( 4.58984e-01,-1.05469e-01,-1.78857e+00),
        POStoFIXED( 4.58984e-01,-2.92969e-01,-1.78857e+00),
        POStoFIXED(-8.59375e-01,-2.50000e-01,-1.26953e+00),
        POStoFIXED(-8.59375e-01,-6.25000e-02,-1.26953e+00),
        POStoFIXED(-7.43996e-01, 3.69168e-01,-1.23525e+00),
        POStoFIXED(-4.37645e-01, 6.75672e-01,-1.21966e+00),
        POStoFIXED( 0.00000e+00, 7.92236e-01,-1.19254e+00),
        POStoFIXED( 4.32870e-01, 6.73285e-01,-1.21489e+00),
        POStoFIXED( 7.41609e-01, 3.64393e-01,-1.23286e+00),
        POStoFIXED( 8.59375e-01,-6.24999e-02,-1.26953e+00),
        POStoFIXED( 8.59375e-01,-2.50000e-01,-1.26953e+00),
        POStoFIXED(-1.14258e+00,-2.07031e-01,-6.15723e-01),
        POStoFIXED(-1.14258e+00,-1.95313e-02,-6.15723e-01),
        POStoFIXED(-9.89176e-01, 5.50222e-01,-5.70585e-01),
        POStoFIXED(-5.81868e-01, 9.49992e-01,-5.50689e-01),
        POStoFIXED( 0.00000e+00, 1.10080e+00,-5.15073e-01),
        POStoFIXED( 5.75521e-01, 9.46818e-01,-5.44341e-01),
        POStoFIXED( 9.86003e-01, 5.43874e-01,-5.67411e-01),
        POStoFIXED( 1.14258e+00,-1.95311e-02,-6.15723e-01),
        POStoFIXED( 1.14258e+00,-2.07031e-01,-6.15723e-01),
        POStoFIXED(-1.25000e+00,-1.87500e-01, 0.00000e+00),
        POStoFIXED(-1.25000e+00,-5.46392e-08, 0.00000e+00),
        POStoFIXED(-1.08218e+00, 6.21528e-01, 4.91898e-02),
        POStoFIXED(-6.36574e-01, 1.05556e+00, 7.06018e-02),
        POStoFIXED( 0.00000e+00, 1.21875e+00, 1.09375e-01),
        POStoFIXED( 6.29629e-01, 1.05208e+00, 7.75463e-02),
        POStoFIXED( 1.07870e+00, 6.14583e-01, 5.26620e-02),
        POStoFIXED( 1.25000e+00, 1.63918e-07, 0.00000e+00),
        POStoFIXED( 1.25000e+00,-1.87500e-01, 0.00000e+00),
        POStoFIXED(-1.21972e+00,-1.87500e-01, 2.58559e-01),
        POStoFIXED(-1.21972e+00,-5.33157e-08, 2.58559e-01),
        POStoFIXED(-1.05970e+00, 6.09456e-01, 3.17136e-01),
        POStoFIXED(-6.32094e-01, 1.03997e+00, 3.57817e-01),
        POStoFIXED(-1.56250e-02, 1.20312e+00, 4.06250e-01),
        POStoFIXED( 6.02184e-01, 1.03659e+00, 3.64579e-01),
        POStoFIXED( 1.04821e+00, 6.02693e-01, 3.20517e-01),
        POStoFIXED( 1.21972e+00, 1.59947e-07, 2.58559e-01),
        POStoFIXED( 1.21972e+00,-1.87500e-01, 2.58559e-01),
        POStoFIXED(-1.03993e+00,-1.87500e-01, 6.59847e-01),
        POStoFIXED(-1.03993e+00,-4.54568e-08, 6.59847e-01),
        POStoFIXED(-9.12809e-01, 5.38511e-01, 7.05058e-01),
        POStoFIXED(-5.57523e-01, 8.97543e-01, 7.26771e-01),
        POStoFIXED(-1.31836e-02, 1.02811e+00, 7.62711e-01),
        POStoFIXED( 5.31810e-01, 8.94452e-01, 7.32952e-01),
        POStoFIXED( 9.02883e-01, 5.32330e-01, 7.08149e-01),
        POStoFIXED( 1.03993e+00, 1.36370e-07, 6.59847e-01),
        POStoFIXED( 1.03993e+00,-1.87500e-01, 6.59847e-01),
        POStoFIXED(-7.42605e-01,-1.87500e-01, 9.73279e-01),
        POStoFIXED(-7.42605e-01,-3.24603e-08, 9.73279e-01),
        POStoFIXED(-6.56705e-01, 3.99400e-01, 1.00136e+00),
        POStoFIXED(-4.07518e-01, 6.58978e-01, 1.00669e+00),
        POStoFIXED(-7.81250e-03, 7.51546e-01, 1.02779e+00),
        POStoFIXED( 3.91295e-01, 6.56654e-01, 1.01133e+00),
        POStoFIXED( 6.50330e-01, 3.94751e-01, 1.00368e+00),
        POStoFIXED( 7.42605e-01, 9.73809e-08, 9.73279e-01),
        POStoFIXED( 7.42605e-01,-1.87500e-01, 9.73279e-01),
        POStoFIXED(-3.78908e-01,-1.87500e-01, 1.17721e+00),
        POStoFIXED(-3.78908e-01,-1.65626e-08, 1.17721e+00),
        POStoFIXED(-3.37172e-01, 2.13966e-01, 1.18876e+00),
        POStoFIXED(-2.11778e-01, 3.53811e-01, 1.18521e+00),
        POStoFIXED(-2.44141e-03, 4.03900e-01, 1.19304e+00),
        POStoFIXED( 2.05678e-01, 3.52569e-01, 1.18769e+00),
        POStoFIXED( 3.34665e-01, 2.11483e-01, 1.19001e+00),
        POStoFIXED( 3.78908e-01, 4.96878e-08, 1.17721e+00),
        POStoFIXED( 3.78908e-01,-1.87500e-01, 1.17721e+00),
        POStoFIXED( 0.00000e+00,-1.87500e-01, 1.25000e+00),
        POStoFIXED( 0.00000e+00, 0.00000e+00, 1.25000e+00),
};

static POLYGON polygon_model_3[] = {
        NORMAL(-4.18391e-01, 0.00000e+00,-9.08267e-01), VERTICES(  1,  0,  2,  3),
        NORMAL(-3.54488e-01, 2.60125e-01,-8.98150e-01), VERTICES(  5,  1,  3,  4),
        NORMAL( 6.13090e-03, 4.62628e-01,-8.86532e-01), VERTICES(  7,  1,  5,  6),
        NORMAL( 3.53759e-01, 2.68358e-01,-8.96013e-01), VERTICES(  9,  1,  7,  8),
        NORMAL( 4.18391e-01, 0.00000e+00,-9.08267e-01), VERTICES(  9, 10,  0,  1),
        NORMAL(-7.91791e-01, 6.67721e-08,-6.10793e-01), VERTICES( 11, 12,  3,  2),
        NORMAL(-7.56936e-01, 2.49556e-01,-6.03962e-01), VERTICES( 12, 13,  4,  3),
        NORMAL(-5.47152e-01, 5.72754e-01,-6.10391e-01), VERTICES( 13, 14,  5,  4),
        NORMAL(-1.71892e-01, 7.76234e-01,-6.06559e-01), VERTICES( 14, 15,  6,  5),
        NORMAL( 1.84332e-01, 7.74459e-01,-6.05174e-01), VERTICES( 15, 16,  7,  6),
        NORMAL( 5.46766e-01, 5.76637e-01,-6.07072e-01), VERTICES( 16, 17,  8,  7),
        NORMAL( 7.54553e-01, 2.59176e-01,-6.02891e-01), VERTICES( 17, 18,  9,  8),
        NORMAL( 7.91791e-01, 6.67721e-08,-6.10793e-01), VERTICES( 10,  9, 18, 19),
        NORMAL(-9.17613e-01, 8.54060e-08,-3.97476e-01), VERTICES( 12, 11, 20, 21),
        NORMAL(-8.77968e-01, 2.67151e-01,-3.97243e-01), VERTICES( 13, 12, 21, 22),
        NORMAL(-6.31451e-01, 6.58616e-01,-4.09261e-01), VERTICES( 14, 13, 22, 23),
        NORMAL(-2.08154e-01, 8.89271e-01,-4.07269e-01), VERTICES( 23, 24, 15, 14),
        NORMAL( 2.19297e-01, 8.87056e-01,-4.06253e-01), VERTICES( 24, 25, 16, 15),
        NORMAL( 6.30782e-01, 6.60779e-01,-4.06799e-01), VERTICES( 25, 26, 17, 16),
        NORMAL( 8.75313e-01, 2.76530e-01,-3.96684e-01), VERTICES( 26, 27, 18, 17),
        NORMAL( 9.17613e-01, 8.54059e-08,-3.97476e-01), VERTICES( 27, 28, 19, 18),
        NORMAL(-9.85120e-01, 1.27152e-07,-1.71866e-01), VERTICES( 21, 20, 29, 30),
        NORMAL(-9.47338e-01, 2.69181e-01,-1.73469e-01), VERTICES( 22, 21, 30, 31),
        NORMAL(-6.82837e-01, 7.07511e-01,-1.82103e-01), VERTICES( 23, 22, 31, 32),
        NORMAL(-2.34985e-01, 9.54875e-01,-1.81649e-01), VERTICES( 32, 33, 24, 23),
        NORMAL( 2.44276e-01, 9.52623e-01,-1.81215e-01), VERTICES( 33, 34, 25, 24),
        NORMAL( 6.82384e-01, 7.08229e-01,-1.81008e-01), VERTICES( 34, 35, 26, 25),
        NORMAL( 9.44866e-01, 2.77845e-01,-1.73294e-01), VERTICES( 27, 26, 35, 36),
        NORMAL( 9.85120e-01, 1.27152e-07,-1.71866e-01), VERTICES( 36, 37, 28, 27),
        NORMAL(-9.93212e-01, 0.00000e+00, 1.16316e-01), VERTICES( 30, 29, 38, 39),
        NORMAL(-9.63445e-01, 2.47639e-01, 1.02223e-01), VERTICES( 31, 30, 39, 40),
        NORMAL(-7.04363e-01, 7.06439e-01, 6.94052e-02), VERTICES( 32, 31, 40, 41),
        NORMAL(-2.54802e-01, 9.65862e-01, 4.67639e-02), VERTICES( 41, 42, 33, 32),
        NORMAL( 2.61296e-01, 9.62675e-01, 7.05807e-02), VERTICES( 42, 43, 34, 33),
        NORMAL( 6.97742e-01, 7.08192e-01, 1.07795e-01), VERTICES( 43, 44, 35, 34),
        NORMAL( 9.58809e-01, 2.59047e-01, 1.16537e-01), VERTICES( 44, 45, 36, 35),
        NORMAL( 9.93212e-01, 0.00000e+00, 1.16316e-01), VERTICES( 45, 46, 37, 36),
        NORMAL(-9.12592e-01,-6.83723e-08, 4.08871e-01), VERTICES( 39, 38, 47, 48),
        NORMAL(-9.00967e-01, 1.90096e-01, 3.90029e-01), VERTICES( 40, 39, 48, 49),
        NORMAL(-6.72568e-01, 6.37154e-01, 3.76414e-01), VERTICES( 41, 40, 49, 50),
        NORMAL(-2.51615e-01, 8.76558e-01, 4.10288e-01), VERTICES( 42, 41, 50, 51),
        NORMAL( 2.51648e-01, 8.77777e-01, 4.07652e-01), VERTICES( 43, 42, 51, 52),
        NORMAL( 6.63670e-01, 6.49080e-01, 3.71802e-01), VERTICES( 52, 53, 44, 43),
        NORMAL( 8.98039e-01, 2.06393e-01, 3.88494e-01), VERTICES( 53, 54, 45, 44),
        NORMAL( 9.12592e-01,-6.83722e-08, 4.08871e-01), VERTICES( 54, 55, 46, 45),
        NORMAL(-7.25502e-01,-4.70083e-08, 6.88219e-01), VERTICES( 48, 47, 56, 57),
        NORMAL(-7.23163e-01, 1.10976e-01, 6.81703e-01), VERTICES( 49, 48, 57, 58),
        NORMAL(-5.30252e-01, 4.87819e-01, 6.93445e-01), VERTICES( 58, 59, 50, 49),
        NORMAL(-2.03618e-01, 6.81876e-01, 7.02556e-01), VERTICES( 51, 50, 59, 60),
        NORMAL( 2.00350e-01, 6.86197e-01, 6.99281e-01), VERTICES( 52, 51, 60, 61),
        NORMAL( 5.28491e-01, 4.97883e-01, 6.87612e-01), VERTICES( 53, 52, 61, 62),
        NORMAL( 7.22972e-01, 1.21091e-01, 6.80183e-01), VERTICES( 62, 63, 54, 53),
        NORMAL( 7.25502e-01,-4.70083e-08, 6.88220e-01), VERTICES( 63, 64, 55, 54),
        NORMAL(-4.89079e-01, 4.23895e-08, 8.72239e-01), VERTICES( 57, 56, 65, 66),
        NORMAL(-4.87274e-01, 4.50497e-02, 8.72086e-01), VERTICES( 58, 57, 66, 67),
        NORMAL(-3.35611e-01, 3.10775e-01, 8.89260e-01), VERTICES( 59, 58, 67, 68),
        NORMAL(-1.42332e-01, 4.26515e-01, 8.93211e-01), VERTICES( 60, 59, 68, 69),
        NORMAL( 1.35664e-01, 4.30265e-01, 8.92450e-01), VERTICES( 61, 60, 69, 70),
        NORMAL( 3.37598e-01, 3.13319e-01, 8.87614e-01), VERTICES( 62, 61, 70, 71),
        NORMAL( 4.87832e-01, 4.77415e-02, 8.71631e-01), VERTICES( 71, 72, 63, 62),
        NORMAL( 4.89079e-01, 4.23895e-08, 8.72239e-01), VERTICES( 72, 73, 64, 63),
        NORMAL(-1.88655e-01, 5.14939e-08, 9.82043e-01), VERTICES( 66, 65, 74, 75),
        NORMAL(-1.48922e-01, 4.80140e-02, 9.87683e-01), VERTICES( 66, 75, 68, 67),
        NORMAL(-5.46721e-03, 1.39609e-01, 9.90192e-01), VERTICES( 70, 69, 68, 75),
        NORMAL( 1.49277e-01, 4.39823e-02, 9.87817e-01), VERTICES( 70, 75, 72, 71),
        NORMAL( 1.88655e-01, 5.14939e-08, 9.82043e-01), VERTICES( 75, 74, 73, 72),
};

static ATTR attribute_model_3[] = {
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+0,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+1,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+2,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+3,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+4,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+5,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+6,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+7,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+8,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+9,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+10,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+11,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+12,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+13,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+14,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+15,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+16,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+17,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+18,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+19,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+20,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+21,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+22,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+23,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+24,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+25,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+26,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x6308|0x8000,GRaddr+27,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+28,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+29,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+30,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+31,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+32,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+33,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+34,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+35,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2318|0x8000,GRaddr+36,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+37,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+38,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+39,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+40,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+41,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+42,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+43,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+44,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+45,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+46,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+47,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+48,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+49,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+50,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+51,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+52,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+53,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+54,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+55,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+56,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+57,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+58,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+59,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+60,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+61,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+62,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+63,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+64,0|CL_Gouraud,sprPolygon,No_Option),
        ATTRIBUTE(Single_Plane,SORT_CEN,No_Texture,0x2118|0x8000,GRaddr+65,0|CL_Gouraud,sprPolygon,No_Option),
};

PDATA PD_MODEL_3 = {
        point_model_3,
        sizeof(point_model_3) / sizeof(POINT),
        polygon_model_3,
        sizeof(polygon_model_3) / sizeof(POLYGON),
        attribute_model_3
};