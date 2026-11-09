/* IL2CPP: Rotatelab.Networking.SatoriFlag<__Il2CppFullySharedGenericType>$$op_Implicit
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___op_Implicit (Rotatelab_Networking_SatoriFlag_T__o* instance, const MethodInfo_1A88FF4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriFlag<__Il2CppFullySharedGenericType>$$op_Implicit
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___op_Implicit
   (Rotatelab_Networking_SatoriFlag_T__o* instance, const MethodInfo_1A88FF4* method); */

void Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___op_Implicit_1a88ff4
               (int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int aiStack_30 [2];
  int iStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_01a990b8 + 0x1a99014);
  iVar1 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 8) + 0x84);
  iVar1 = -(iVar4 + 7U & 0xfffffff8);
  iVar5 = (int)&iStack_28 + iVar1;
  if (param_1 != (int *)0x0) {
    iVar3 = *(int *)(*param_1 + 0xe4);
    uVar2 = *(undefined4 *)(iVar3 + 4);
    pcVar6 = *(code **)(iVar3 + 8);
    iStack_28 = iVar5;
    *(int *)((int)aiStack_30 + iVar1) = iVar5;
    (*pcVar6)(uVar2,iVar3,param_1,&iStack_28);
    thunk_FUN_00f95db8(param_2,iVar5,iVar4);
    if (**(int **)(_UNK_01a990bc + 0x1a990a4) != iStack_24) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

