/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$op_Inequality
bool Rotatelab_ObservableValue___Il2CppFullySharedGenericType___op_Inequality (Rotatelab_ObservableValue_T__o* e1, Rotatelab_ObservableValue_T__o* e2, const MethodInfo_185E934* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$op_Inequality
   bool Rotatelab_ObservableValue___Il2CppFullySharedGenericType___op_Inequality
   (Rotatelab_ObservableValue_T__o* e1, Rotatelab_ObservableValue_T__o* e2, const
   MethodInfo_185E934* method); */

uint Rotatelab_ObservableValue___Il2CppFullySharedGenericType___op_Inequality_185e934
               (int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,*(undefined4 *)(*param_1 + 0xc4));
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}

