/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$<ProcessResponse>g__OnError|8_0
System_Exception_o* Rotatelab_Networking_HiroUnityWebRequestAdapter___ProcessResponse_g__OnError_8_0 (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, int64_t statusCode, System_String_o* content, int32_t grpcCode, Rotatelab_Networking_HiroUnityWebRequestAdapter___c__DisplayClass8_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroUnityWebRequestAdapter$$<ProcessResponse>g__OnError|8_0
   System_Exception_o*
   Rotatelab_Networking_HiroUnityWebRequestAdapter___ProcessResponse_g__OnError_8_0
   (Rotatelab_Networking_HiroUnityWebRequestAdapter_o* __this, int64_t statusCode, System_String_o*
   content, int32_t grpcCode,
   Rotatelab_Networking_HiroUnityWebRequestAdapter___c__DisplayClass8_0_o* , const MethodInfo*
   method); */

void Rotatelab_Networking_HiroUnityWebRequestAdapter___ProcessResponse_g__OnError_8_0_1161600
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
               undefined4 param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01171860 + 0x1171620);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171864 + 0x1171634));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01171868 + 0x1171640));
    *pcVar5 = '\x01';
  }
  if (param_1[3] != 0) {
    piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0117186c + 0x117166c),4);
    uStack_30 = param_3;
    uStack_2c = param_4;
    iVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01171870 + 0x1171684) + 0x34),&uStack_30);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
      uVar4 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar4,0);
    }
    if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar1[4] = iVar2;
    thunk_FUN_00ec5080(piVar1 + 4,iVar2);
    if (*(int *)(param_7 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Networking_UnityWebRequest__get_uri_39e97b8(*(int *)(param_7 + 4),0);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
      uVar4 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar4,0);
    }
    if ((uint)piVar1[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar1[5] = iVar2;
    thunk_FUN_00ec5080(piVar1 + 5,iVar2);
    uStack_34 = param_6;
    iVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01171874 + 0x117176c) + 0x24),&uStack_34);
    if ((iVar2 != 0) &&
       (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
      uVar4 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar4,0);
    }
    if ((uint)piVar1[3] < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar1[6] = iVar2;
    thunk_FUN_00ec5080(piVar1 + 6,iVar2);
    if ((param_5 != 0) &&
       (iVar2 = thunk_FUN_00f00bc8(param_5,*(undefined4 *)(*piVar1 + 0x20)), iVar2 == 0)) {
      uVar4 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar4,0);
    }
    if ((uint)piVar1[3] < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar1[7] = param_5;
    thunk_FUN_00ec5080(piVar1 + 7,param_5);
    uVar4 = System_String__Format_2a0c308(**(undefined4 **)(_UNK_01171878 + 0x1171824),piVar1,0);
    Rotatelab_Networking_HiroLogger__Error_115f85c(uVar4,uVar4);
  }
  uVar4 = *(undefined4 *)(*param_1 + 0xec);
  (**(code **)(*param_1 + 0xe8))(param_1,uVar4,param_3,param_4,param_5,param_6,uVar4);
  return;
}

