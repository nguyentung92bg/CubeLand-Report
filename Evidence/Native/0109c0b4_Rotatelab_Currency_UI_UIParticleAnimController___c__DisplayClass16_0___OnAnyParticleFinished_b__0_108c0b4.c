/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass16_0$$<OnAnyParticleFinished>b__0
void Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass16_0___OnAnyParticleFinished_b__0 (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass16_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Currency.UI.UIParticleAnimController.<>c__DisplayClass16_0$$<OnAnyParticleFinished>b__0
   void 
   Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass16_0___OnAnyParticleFinished_b__0
   (Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass16_0_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Currency_UI_UIParticleAnimController___c__DisplayClass16_0___OnAnyParticleFinished_b__0_108c0b4
          (int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_0109c1fc + 0x109c0c8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109c200 + 0x109c0dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109c204 + 0x109c0e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109c208 + 0x109c0f4));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_0109c20c + 0x109c134);
  uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar4,*(undefined4 *)(param_1 + 0xc),*puVar5);
  if (*(int *)(**(int **)(_UNK_0109c210 + 0x109c148) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x14);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar4,*(undefined4 *)(param_1 + 0xc),*puVar5);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(iVar4,0);
  }
  if (*(int *)(**(int **)(_UNK_0109c214 + 0x109c1cc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Vibration_VibrationManager__VibrateSelection_107e598();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  pcVar3 = (char *)(_UNK_0117bba4 + 0x117ba38);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117bba8 + 0x117ba4c),0x3f800000,0x3d4ccccd,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117bbac + 0x117ba58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117bbb0 + 0x117ba64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117bbb4 + 0x117ba70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117bbb8 + 0x117ba7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117bbbc + 0x117ba88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117bbc0 + 0x117ba94));
    *pcVar3 = '\x01';
  }
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0117bbc4 + 0x117baa8));
  System_Object___ctor_2bb93bc(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = (undefined4 *)(iVar4 + 8);
  *puVar5 = uVar1;
  thunk_FUN_00ec5080(puVar5,uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0117bbc8 + 0x117baec));
  DG_Tweening_Core_DOGetter_Vector3____ctor_1f63620
            (uVar1,iVar4,**(undefined4 **)(_UNK_0117bbcc + 0x117bb08),0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0117bbd0 + 0x117bb1c));
  DG_Tweening_Core_DOSetter_Vector3____ctor_1f64214
            (uVar2,iVar4,**(undefined4 **)(_UNK_0117bbd4 + 0x117bb38),0);
  if (*(int *)(**(int **)(_UNK_0117bbd8 + 0x117bb4c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = DG_Tweening_DOTween__To_1166ce0(uVar1,uVar2,0x3f800000,0x3f800000,0x3f800000,0x3d4ccccd);
  DG_Tweening_TweenSettingsExtensions__SetTarget_object__15da350
            (uVar1,*puVar5,**(undefined4 **)(_UNK_0117bbdc + 0x117bb8c));
  return uVar1;
}

