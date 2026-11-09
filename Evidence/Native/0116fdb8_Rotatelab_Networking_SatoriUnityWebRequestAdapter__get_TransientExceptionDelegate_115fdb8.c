/* IL2CPP: Rotatelab.Networking.SatoriUnityWebRequestAdapter$$get_TransientExceptionDelegate
Satori_TransientExceptionDelegate_o* Rotatelab_Networking_SatoriUnityWebRequestAdapter__get_TransientExceptionDelegate (Rotatelab_Networking_SatoriUnityWebRequestAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriUnityWebRequestAdapter$$get_TransientExceptionDelegate
   Satori_TransientExceptionDelegate_o*
   Rotatelab_Networking_SatoriUnityWebRequestAdapter__get_TransientExceptionDelegate
   (Rotatelab_Networking_SatoriUnityWebRequestAdapter_o* __this, const MethodInfo* method); */

int Rotatelab_Networking_SatoriUnityWebRequestAdapter__get_TransientExceptionDelegate_115fdb8(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar3 = (char *)(_UNK_0116fe94 + 0x116fdc8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116fe98 + 0x116fddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116fe9c + 0x116fde8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116fea0 + 0x116fdf4));
    *pcVar3 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0116fea4 + 0x116fe08);
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
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0116fea8 + 0x116fe50));
    Satori_TransientExceptionDelegate___ctor_2d13c44
              (iVar4,uVar5,**(undefined4 **)(_UNK_0116feac + 0x116fe70),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar4;
    thunk_FUN_00ec5080(piVar6,iVar4);
  }
  return iVar4;
}

