//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_primitives_info.cpp
//
// MATLAB Coder version            : 24.2
// C/C++ source code generated on  : 27-Nov-2024 16:53:14
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
  const char_T *data[10]{
      "789ced5a4d73da46185e77d24c9a7153a699767a4866b8e6e261ec82b14f89c1d8066c1c"
      "f3e1da554616b0c01a49ab6805989c3cc9747aec0fe8b91f939924a7"
      "74da3f904b4f9d4e0e99a4bdb4d7fe878a0f01c208c4c859cb62dfcbb23c42cfab775ff4"
      "e87d57606e6b7b0e007003742dd9193eee4e7dddf10360b6617cae3b",
      "ce0fcd0dfb105c31fdcec0bfeb8e052c6bf044eb4c644182bd5f16b1846441d6324d0502"
      "15122cd661b18d949008334882e9c1c94e6b26c506a0dea405b53e47"
      "2ab0504dd724a05648df437170d28b876f6ef4f55eb1198fa716f1f00de15faf3f88ac72"
      "590255c20972516d725148aa1a56b8ac8ceafab74813b86da18c88a6",
      "0a22e4d2508f5811fb0559c6dc961e3b514465286bfe3aaca08208898e14fd424dc33296"
      "708df88b2aaa23b93c782c6f1ccb6520d116b9bc40508117da10d174"
      "362d29e439452084575424214d77644132c7e7c4e2faedc6e7e684f8187849cf0191c78a"
      "c66bfa4af22da74c7e1c39f4e3aaa51f1da4886b79119e5f5ebcb0e4",
      "33e3eecd8b112ba227c7a4f5f8c4667c86c7fef1d7dae33f77dfb6215a7c3ffdfb6a9526"
      "9f6117c5e7f47ffdb9059f6f08cf04f2c7699caa860e654d0ce5d677"
      "91185c5eebfbb13b8167921fc0624eebfc4c3fc6eb876271fd76e363f5bce11bc2dbf728"
      "fd4142f7591ce43f72c83fad6e5c73980f3f5bf29971f7e6c3e04a2c",
      "485ed58b1f836f985e00fb79fd99059f6f08afcbb1465aabec272a3b07c164763b57cb87"
      "9601d38b59d10ba779f6e984f81878ffe956bf4df5cb8d4b5b6f3cb7"
      "e433e3eecd8bb32bd2ca0dafeac7ebeb4f997e80f7506f44d14e6837f295145b091d1fe6"
      "92e1f0526e6f93e9c7ace887d37ae3a309f131f00286255ed4af1e98",
      "f98f1cf2d3ae377eb0e433e3eecd87de4ab45381d6fded2fca7af14bed9bdf69f219e675"
      "bd4865202eeec5ef27e2d1873b698134a2814492f5a77ae77b66717e"
      "df10eedefb83592ff8e380e93e716a71fd76e3737b427c0c7c44379d7f0455cc1f43b50a"
      "2e4e3ffc0ef3e3374b3e33eedefc18bb32c6e38567eb90f9c5ffc234",
      "f90cf3baae249642615489c54f9a5f0697a27bc148b3f930b0ce7485e98abdf8dc9a101f"
      "033fdb3531c9ca85e9ca170ef3e3574b3e33eedefc18b732dedd1779"
      "bcf007d31370fe7ab2b278d04c6625514fe5f07ab8b1256f06d62aac4e99193d617dade9"
      "f8585f6b745c585fab635ed70bd6d71a7ffecbbf0f4274275cf7de6e",
      "cb29931f470efd60efed3aec67b55684e27bbbb4f563a3fcf24f9a7c865d56fdb0fb1e56"
      "7c25a7643389fd7caa9c46f154e95135122180e9c7ace807ab37a6e3"
      "63f5c6e8b8b84d2f58bdd131566f4c777ed69f32eb854bf6d1db4eb17d7437e4c7d895a1"
      "be8ffe37655d59fcf6fb539a7c86795d57aaf13584538d666839996d",
      "ac04c513b45192224c5798aed88bcff4fbe80a26676585eda3bb4057ceae0cbd7d74da7a"
      "72e7dd93539a7c86795d4fb60287b1a55473b75cafde8b1365adbad9"
      "88eeb13a6566f484f5b5a6e3637dadd171617dad8e795d2fbcdad7fa1fac96060d",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 19480U, &nameCaptureInfo);
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
      emlrtCreateStructMatrix(1, 18, 8, (const char_T **)&epFieldName[0]);
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
                emlrtMxCreateDoubleScalar(739583.67046296294));
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
                emlrtMxCreateDoubleScalar(739583.67046296294));
  emlrtSetField(xEntryPoints, 1, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 1, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 2, "QualifiedName",
                emlrtMxCreateString("final_opt_pos_stop_zero_jerk"));
  emlrtSetField(xEntryPoints, 2, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 2, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 2, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 2, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_pos_stop_zero_jerk.m"));
  emlrtSetField(xEntryPoints, 2, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.67398148146));
  emlrtSetField(xEntryPoints, 2, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 2, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 3, "QualifiedName",
                emlrtMxCreateString("final_opt_time_pass"));
  emlrtSetField(xEntryPoints, 3, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 3, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 3, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 3, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_time_pass.m"));
  emlrtSetField(xEntryPoints, 3, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.69747685187));
  emlrtSetField(xEntryPoints, 3, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 3, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 4, "QualifiedName",
                emlrtMxCreateString("final_opt_time_pass_zero_jerk"));
  emlrtSetField(xEntryPoints, 4, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 4, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 4, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 4, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_time_pass_zero_jerk."
          "m"));
  emlrtSetField(xEntryPoints, 4, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.6974421296));
  emlrtSetField(xEntryPoints, 4, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 4, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 5, "QualifiedName",
                emlrtMxCreateString("final_opt_time_stop"));
  emlrtSetField(xEntryPoints, 5, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 5, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 5, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 5, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_time_stop.m"));
  emlrtSetField(xEntryPoints, 5, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.670625));
  emlrtSetField(xEntryPoints, 5, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 5, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 6, "QualifiedName",
                emlrtMxCreateString("final_opt_time_stop_zero_jerk"));
  emlrtSetField(xEntryPoints, 6, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 6, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 6, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 6, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_time_stop_zero_jerk."
          "m"));
  emlrtSetField(xEntryPoints, 6, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.67398148146));
  emlrtSetField(xEntryPoints, 6, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 6, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 7, "QualifiedName",
                emlrtMxCreateString("final_opt_vel_pass"));
  emlrtSetField(xEntryPoints, 7, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 7, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 7, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 7, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_vel_pass.m"));
  emlrtSetField(xEntryPoints, 7, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.69747685187));
  emlrtSetField(xEntryPoints, 7, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 7, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 8, "QualifiedName",
                emlrtMxCreateString("final_opt_vel_pass_zero_jerk"));
  emlrtSetField(xEntryPoints, 8, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 8, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 8, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 8, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\final_opt_vel_pass_zero_jerk.m"));
  emlrtSetField(xEntryPoints, 8, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.6974421296));
  emlrtSetField(xEntryPoints, 8, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 8, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 9, "QualifiedName", emlrtMxCreateString("j_opt"));
  emlrtSetField(xEntryPoints, 9, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 9, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 9, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 9, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\j_opt.m"));
  emlrtSetField(xEntryPoints, 9, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.67046296294));
  emlrtSetField(xEntryPoints, 9, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 9, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 10, "QualifiedName",
                emlrtMxCreateString("pass_primitive"));
  emlrtSetField(xEntryPoints, 10, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 10, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 10, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 10, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\pass_primitive.m"));
  emlrtSetField(xEntryPoints, 10, "TimeStamp",
                emlrtMxCreateDoubleScalar(739578.43549768522));
  emlrtSetField(xEntryPoints, 10, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 10, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 5);
  emlrtSetField(xEntryPoints, 11, "QualifiedName",
                emlrtMxCreateString("pass_primitive_j0"));
  emlrtSetField(xEntryPoints, 11, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 11, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 11, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 11, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\pass_primitive_j0.m"));
  emlrtSetField(xEntryPoints, 11, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.70357638889));
  emlrtSetField(xEntryPoints, 11, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 11, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 12, "QualifiedName",
                emlrtMxCreateString("s_opt"));
  emlrtSetField(xEntryPoints, 12, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 12, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 12, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 12, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\s_opt.m"));
  emlrtSetField(xEntryPoints, 12, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.67045138893));
  emlrtSetField(xEntryPoints, 12, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 12, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 13, "QualifiedName",
                emlrtMxCreateString("stop_primitive"));
  emlrtSetField(xEntryPoints, 13, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 13, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 13, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 13, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\stop_primitive.m"));
  emlrtSetField(xEntryPoints, 13, "TimeStamp",
                emlrtMxCreateDoubleScalar(739564.48893518513));
  emlrtSetField(xEntryPoints, 13, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 13, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 14, "QualifiedName",
                emlrtMxCreateString("stop_primitive_j0"));
  emlrtSetField(xEntryPoints, 14, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 14, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 14, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 14, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\stop_primitive_j0.m"));
  emlrtSetField(xEntryPoints, 14, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.69179398147));
  emlrtSetField(xEntryPoints, 14, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 14, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 15, "QualifiedName",
                emlrtMxCreateString("time_min_vel"));
  emlrtSetField(xEntryPoints, 15, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 15, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 15, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 15, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\time_min_vel.m"));
  emlrtSetField(xEntryPoints, 15, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.69747685187));
  emlrtSetField(xEntryPoints, 15, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 15, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 6);
  emlrtSetField(xEntryPoints, 16, "QualifiedName",
                emlrtMxCreateString("total_cost"));
  emlrtSetField(xEntryPoints, 16, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 16, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 16, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 16, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\total_cost.m"));
  emlrtSetField(xEntryPoints, 16, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.67046296294));
  emlrtSetField(xEntryPoints, 16, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 16, "Visible", emlrtMxCreateLogicalScalar(true));
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 17, "QualifiedName",
                emlrtMxCreateString("v_opt"));
  emlrtSetField(xEntryPoints, 17, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 17, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 17, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 17, "ResolvedFilePath",
      emlrtMxCreateString(
          "C:\\Users\\andry\\Desktop\\Universita\\Magistrale\\Secondo "
          "anno\\Intelligent vehicles and autonomous "
          "driving\\Intelligent_vehicl"
          "es\\Test2\\basic_agent_st\\MatLab\\v_opt.m"));
  emlrtSetField(xEntryPoints, 17, "TimeStamp",
                emlrtMxCreateDoubleScalar(739583.67045138893));
  emlrtSetField(xEntryPoints, 17, "Constructor",
                emlrtMxCreateLogicalScalar(false));
  emlrtSetField(xEntryPoints, 17, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("24.2.0.2712019 (R2024b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("f4BpV7hopZ5yehrKWcmQkC"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

//
// File trailer for _coder_primitives_info.cpp
//
// [EOF]
//
