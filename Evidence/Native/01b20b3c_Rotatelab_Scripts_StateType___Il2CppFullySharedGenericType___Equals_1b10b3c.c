/* IL2CPP: Rotatelab.Scripts.StateType<__Il2CppFullySharedGenericType>$$Equals
bool Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType___Equals (Rotatelab_Scripts_StateType_T__o* __this, Il2CppObject* obj, const MethodInfo_1B10B3C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.StateType<__Il2CppFullySharedGenericType>$$Equals
   bool Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType___Equals
   (Rotatelab_Scripts_StateType_T__o* __this, Il2CppObject* obj, const MethodInfo_1B10B3C* method);
    */

uint Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType___Equals_1b10b3c
               (int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_1c;
  
  uVar5 = 0;
  uStack_1c = 0;
  iVar1 = **(int **)(*(int *)(param_3 + 0x10) + 0x60);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (param_2 != (int *)0x0) {
    if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*param_2 + 0xb8)) &&
       (*(int *)(*(int *)(*param_2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) == iVar1)) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar2 = (int *)System_Object__GetType_2bb9c9c(param_1,0);
      uVar3 = System_Object__GetType_2bb9c9c(param_2,0);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = (**(code **)(*piVar2 + 0x4a0))(piVar2,uVar3,*(undefined4 *)(*piVar2 + 0x4a4));
      uStack_1c = (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x14))
                            (param_1);
      uVar3 = (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x14))
                        (param_2);
      uVar4 = System_Int32__Equals_2b6b9d0(&uStack_1c,uVar3,0);
      uVar5 = uVar5 & uVar4;
    }
  }
  return uVar5;
}

