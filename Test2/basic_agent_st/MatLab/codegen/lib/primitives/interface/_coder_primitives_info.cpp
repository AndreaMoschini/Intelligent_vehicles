//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_primitives_info.cpp
//
// MATLAB Coder version            : 24.2
// C/C++ source code generated on  : 22-Nov-2024 12:57:44
//

// Include Files
#include "_coder_primitives_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *emlrtMexFcnResolvedFunctionsInfo();

// Function Definitions
//
// Arguments    : void
// Return Type  : const mxArray *
//
static const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7]{
      "789ced594173d240140e9dd6a9335519753c79e0e4b12360ad3a5e0ab4b4d2d67600a7d4"
      "685892051692dd34bbd0963fe18ce35f70c6f1a0677f841deffa2bbc"
      "79730304126c0c9d742242de65797c09dfdbf71ef9f26685c8d64e441084eb42cff6eef5"
      "d66b7d3fda5fe704a78de291fe7a65c4b76c419877dc67e16ffaab4c",
      "308327ace760a0c1c19d0ad1100698154e7528189012b50d952e52452a2c200de6edceae"
      "e9691b3668e09890f9395d877233dfd204a34e8711aa7667908f68e4"
      "fcfdce8f998f8f2ef9888ee02fd75fa59f88450a0d2a02ac18a76206d22623ba58c4a8cd"
      "bf450c883ba0862833800ac53ce41953480c604cc42d9e3b55453588",
      "59ac0deb485621e58812032d4630d1488bc61403b511aed9af95ac6bc502a42c21560045"
      "b204ba10659c8d6d838aa8034a25dd401a623c9065cd999f1397fd8f"
      "9b9f5b1ef9b1f02aef0155223a9318afa46406e588a3ec330eb7be8df61185b42a2abcbc"
      "bef8eccae7c427b72fcea9086f0eaf7adc18333fa3ebf0fac5ee7af6",
      "f47b170a8aef87be900a92cfb27fc5e7f77f7dc7852f3a82a79891a17ba06e94b651761f"
      "efee575a956adaa6471e3c5e71082e7e50bf1feac7dff54377d9ffb8"
      "f959f2c88f85779f51fc4582c7acdaf9cb3ef92faa1b8b3efbe1832b9f139fdc7eb05762"
      "599b56bd78f0eb76a817c2e5ebc5615286cd522d9323a7f8583e49a7",
      "560fb4e446a817b3a2177efbeca6477e2c7cf876cb1f53c371e3bf9d373eb9f239f1c9ed"
      "8b3f2b62f6c6b4eac7bbd73fd782e4b36cdaf5831d741a4ab69aa81d"
      "67e3f9d6e6c1512e13a7a9503f66453ffcce1b573df263e132815549e5bb179cfc659ffc"
      "41cf1bef5df99cf8e4f6c3a012dd5608eaf9f63560bdf8f26dee6e90",
      "7c964dbb5e94f6953db6ba522a1acf9f355e249a1de3f1a37c36d48be9d10bca8398b8f3"
      "0d3328471c659f7184e71b3ecf37cc8a0478be11b47ebc3d5b5a0992"
      "cfb269d78f4ebbb156393cdcceaa470fe3eb9bc96c3a17bf1feac7cce847386f5c8c2f9c"
      "37cecfcba4e945386ff42c9c37c6fbfddf7f30fd5c",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 9832U, &nameCaptureInfo);
  return nameCaptureInfo;
}

//
// Arguments    : void
// Return Type  : mxArray *
//
mxArray *emlrtMexFcnProperties()
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[9]{"Version",
                                 "ResolvedFunctions",
                                 "Checksum",
                                 "EntryPoints",
                                 "CoverageInfo",
                                 "IsPolymorphic",
                                 "PropertyList",
                                 "UUID",
                                 "ClassEntryPointIsHandle"};
  const char_T *epFieldName[8]{
      "QualifiedName",    "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "ResolvedFilePath", "TimeStamp",      "Constructor",     "Visible"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 12, 8, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 0, "QualifiedName", emlrtMxCreateString("a_opt"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\a_opt.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.49717592588));
  emlrtSetField(xEntryPoints, 0, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 1, "QualifiedName",
                emlrtMxCreateString("coef_list"));
  emlrtSetField(xEntryPoints, 1, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 1, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 1, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 1, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\coef_list.m"));
  emlrtSetField(xEntryPoints, 1, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.4971875));
  emlrtSetField(xEntryPoints, 1, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 1, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 2, "QualifiedName",
                emlrtMxCreateString("final_opt_time_pass"));
  emlrtSetField(xEntryPoints, 2, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 2, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 2, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 2, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_time_pass.m"));
  emlrtSetField(xEntryPoints, 2, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.50289351854));
  emlrtSetField(xEntryPoints, 2, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 2, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 3, "QualifiedName",
                emlrtMxCreateString("final_opt_time_stop"));
  emlrtSetField(xEntryPoints, 3, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 3, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 3, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 3, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_time_stop.m"));
  emlrtSetField(xEntryPoints, 3, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.49767361116));
  emlrtSetField(xEntryPoints, 3, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 3, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 4, "QualifiedName",
                emlrtMxCreateString("final_opt_vel_pass"));
  emlrtSetField(xEntryPoints, 4, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 4, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 4, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 4, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_vel_pass.m"));
  emlrtSetField(xEntryPoints, 4, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.50289351854));
  emlrtSetField(xEntryPoints, 4, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 4, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 5, "QualifiedName", emlrtMxCreateString("j_opt"));
  emlrtSetField(xEntryPoints, 5, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 5, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 5, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 5, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\j_opt.m"));
  emlrtSetField(xEntryPoints, 5, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.4971875));
  emlrtSetField(xEntryPoints, 5, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 5, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 6, "QualifiedName",
                emlrtMxCreateString("pass_primitive"));
  emlrtSetField(xEntryPoints, 6, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 6, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 6, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 6, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\pass_primitive.m"));
  emlrtSetField(xEntryPoints, 6, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.43549768522));
  emlrtSetField(xEntryPoints, 6, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 6, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 7, "QualifiedName", emlrtMxCreateString("s_opt"));
  emlrtSetField(xEntryPoints, 7, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 7, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 7, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 7, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\s_opt.m"));
  emlrtSetField(xEntryPoints, 7, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.49717592588));
  emlrtSetField(xEntryPoints, 7, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 7, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 8, "QualifiedName",
                emlrtMxCreateString("stop_primitive"));
  emlrtSetField(xEntryPoints, 8, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 8, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 8, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 8, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\stop_primitive.m"));
  emlrtSetField(xEntryPoints, 8, "TimeStamp",
                emlrtMxCreateDoubleScalar(739564.48893518513));
  emlrtSetField(xEntryPoints, 8, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 8, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 9, "QualifiedName",
                emlrtMxCreateString("time_min_vel"));
  emlrtSetField(xEntryPoints, 9, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 9, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 9, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 9, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\time_min_vel.m"));
  emlrtSetField(xEntryPoints, 9, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.50289351854));
  emlrtSetField(xEntryPoints, 9, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 9, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 10, "QualifiedName",
                emlrtMxCreateString("total_cost"));
  emlrtSetField(xEntryPoints, 10, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 10, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 10, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 10, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\total_cost.m"));
  emlrtSetField(xEntryPoints, 10, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.4971875));
  emlrtSetField(xEntryPoints, 10, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 10, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 11, "QualifiedName",
                emlrtMxCreateString("v_opt"));
  emlrtSetField(xEntryPoints, 11, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 11, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 11, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 11, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\v_opt.m"));
  emlrtSetField(xEntryPoints, 11, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.49717592588));
  emlrtSetField(xEntryPoints, 11, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 11, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("24.2.0.2712019 (R2024b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("8wURKZhVtXrsKVA3oL7kgH"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

//
// File trailer for _coder_primitives_info.cpp
//
// [EOF]
//
