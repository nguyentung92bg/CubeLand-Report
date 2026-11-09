/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$CameraRotationCoroutine
System_Collections_IEnumerator_o* Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$CameraRotationCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine
   (Rotatelab_Boosters_CannonBoosterController_o* __this, const MethodInfo* method); */

int Rotatelab_Boosters_CannonBoosterController__CameraRotationCoroutine_113559c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01145608 + 0x11455b0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114560c + 0x11455c4));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01145610 + 0x11455d8));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

