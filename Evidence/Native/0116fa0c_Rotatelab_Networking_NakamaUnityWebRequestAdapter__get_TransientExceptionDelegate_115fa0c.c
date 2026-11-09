/* IL2CPP: Rotatelab.Networking.NakamaUnityWebRequestAdapter$$get_TransientExceptionDelegate
Nakama_TransientExceptionDelegate_o* Rotatelab_Networking_NakamaUnityWebRequestAdapter__get_TransientExceptionDelegate (Rotatelab_Networking_NakamaUnityWebRequestAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.NakamaUnityWebRequestAdapter$$get_TransientExceptionDelegate
   Nakama_TransientExceptionDelegate_o*
   Rotatelab_Networking_NakamaUnityWebRequestAdapter__get_TransientExceptionDelegate
   (Rotatelab_Networking_NakamaUnityWebRequestAdapter_o* __this, const MethodInfo* method); */

int Rotatelab_Networking_NakamaUnityWebRequestAdapter__get_TransientExceptionDelegate_115fa0c(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar3 = (char *)(_UNK_0116fae8 + 0x116fa1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116faec + 0x116fa30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116faf0 + 0x116fa3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116faf4 + 0x116fa48));
    *pcVar3 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0116faf8 + 0x116fa5c);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar2[1];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar5 = *puVar2;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0116fafc + 0x116faa4));
    Nakama_TransientExceptionDelegate___ctor_2c26720
              (iVar4,uVar5,**(undefined4 **)(_UNK_0116fb00 + 0x116fac4),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar4;
    thunk_FUN_00ec5080(piVar6,iVar4);
  }
  return iVar4;
}

