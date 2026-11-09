/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnBoosterUsed
void Rotatelab_Scripts_PlaceableManager__OnBoosterUsed (Rotatelab_Scripts_PlaceableManager_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnBoosterUsed
   void Rotatelab_Scripts_PlaceableManager__OnBoosterUsed (Rotatelab_Scripts_PlaceableManager_o*
   __this, int32_t boosterType, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__OnBoosterUsed_1049d8c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar5 = (char *)(_UNK_0105a158 + 0x1059db0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a15c + 0x1059dc4),param_2,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a160 + 0x1059dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a164 + 0x1059ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a168 + 0x1059de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a16c + 0x1059df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105a170 + 0x1059e00));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (param_2 - 1U < 2) {
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    pcVar5 = (char *)(_UNK_0105a174 + 0x1059e30);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0105a178 + 0x1059e44));
      *pcVar5 = '\x01';
    }
    puVar3 = *(undefined4 **)(**(int **)(_UNK_0105a17c + 0x1059e58) + 0x5c);
    uVar10 = *puVar3;
    uVar7 = puVar3[1];
    uVar6 = puVar3[2];
    if (*(int *)(**(int **)(_UNK_0105a180 + 0x1059e64) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPosition_2ce550c
              (&uStack_48,uVar9,uVar10,uVar7,uVar6,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
    Rotatelab_GameExtensions__PauseGameDuringAnimation_fb4fb4
              (&uStack_48,piStack_3c,uStack_48,puStack_44,uStack_40,piStack_3c,0);
    if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_48,*(int *)(param_1 + 0xb4),**(undefined4 **)(_UNK_0105a184 + 0x1059f18));
    uStack_38 = uStack_48;
    uStack_34 = puStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    uStack_48 = 0;
    puVar3 = *(undefined4 **)(_UNK_0105a188 + 0x1059f3c);
    piVar8 = *(int **)(_UNK_0105a18c + 0x1059f44);
    puStack_44 = &uStack_38;
    while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_38,*puVar3), piVar1 = piStack_2c, iVar2 != 0) {
      if (piStack_2c != (int *)0x0) {
        uVar4 = (uint)*(byte *)(*piVar8 + 0xb8);
        if (((uVar4 <= *(byte *)(*piStack_2c + 0xb8)) &&
            (*(int *)(*(int *)(*piStack_2c + 100) + uVar4 * 4 + -4) == *piVar8)) &&
           (iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piStack_2c,0),
           iVar2 < 5)) {
          iVar2 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(piVar1,0);
          uVar9 = 2;
          if (iVar2 == 0) {
            uVar9 = 4;
          }
          (**(code **)(*piVar1 + 0x150))(piVar1,uVar9,*(undefined4 *)(*piVar1 + 0x154));
          if (param_2 == 1) {
            Rotatelab_Scripts_BlasterController__SetEndlessScaleAnimationEnabled_1034e24(piVar1,0,0)
            ;
          }
          else if (param_2 == 2) {
            Rotatelab_Scripts_BlasterController__SetEndlessShakeAnimationEnabled_1034fbc(piVar1,0,0)
            ;
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_38,**(undefined4 **)(_UNK_0105a190 + 0x105a010));
  }
  else if (param_2 == 4) {
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    pcVar5 = (char *)(_UNK_0105a198 + 0x105a084);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0105a19c + 0x105a098));
      *pcVar5 = '\x01';
    }
    puVar3 = *(undefined4 **)(**(int **)(_UNK_0105a1a0 + 0x105a0ac) + 0x5c);
    uVar6 = puVar3[2];
    uVar7 = *puVar3;
    uVar10 = puVar3[1];
    if (*(int *)(**(int **)(_UNK_0105a1a4 + 0x105a0b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPosition_2ce550c
              (&uStack_48,uVar9,uVar7,uVar10,uVar6,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    Rotatelab_GameExtensions__PauseGameDuringAnimation_fb4fb4
              (&uStack_48,piStack_3c,uStack_48,puStack_44,uStack_40,piStack_3c,0);
  }
  return;
}

