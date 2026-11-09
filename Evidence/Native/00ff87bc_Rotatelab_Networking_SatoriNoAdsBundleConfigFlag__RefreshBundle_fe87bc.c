/* IL2CPP: Rotatelab.Networking.SatoriNoAdsBundleConfigFlag$$RefreshBundle
void Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__RefreshBundle (Rotatelab_Networking_SatoriNoAdsBundleConfigFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriNoAdsBundleConfigFlag$$RefreshBundle
   void Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__RefreshBundle
   (Rotatelab_Networking_SatoriNoAdsBundleConfigFlag_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__RefreshBundle_fe87bc(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  
  pcVar2 = (char *)(_UNK_00ff88c8 + 0xff87d0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff88cc + 0xff87e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff88d0 + 0xff87f0));
    *pcVar2 = '\x01';
  }
  iVar3 = param_1[5];
  if (*(int *)(**(int **)(_UNK_00ff88d4 + 0xff8804) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = UnityEngine_Object__op_Equality_36033f4(iVar3,0,0);
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar1 = (uint)*(byte *)(param_1 + 8);
  }
  if (bVar4 && uVar1 == 0) {
    iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(float *)(iVar3 + 0xe0) <= 0.0) {
      return;
    }
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00ff88d8 + 0xff8870));
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_IAP_PurchasesListener__HasUnfinishedPurchase_1099f94
                      (iVar3,*(undefined4 *)(param_1[5] + 0xc),0);
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ff88c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
      return;
    }
  }
  return;
}

