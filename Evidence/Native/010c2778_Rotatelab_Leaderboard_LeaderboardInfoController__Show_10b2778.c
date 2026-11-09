/* IL2CPP: Rotatelab.Leaderboard.LeaderboardInfoController$$Show
void Rotatelab_Leaderboard_LeaderboardInfoController__Show (Rotatelab_Leaderboard_LeaderboardInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardInfoController$$Show
   void Rotatelab_Leaderboard_LeaderboardInfoController__Show
   (Rotatelab_Leaderboard_LeaderboardInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardInfoController__Show_10b2778(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_010c338c + 0x10c2790);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3390 + 0x10c27a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3394 + 0x10c27b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3398 + 0x10c27bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c339c + 0x10c27c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33a0 + 0x10c27d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33a4 + 0x10c27e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33a8 + 0x10c27ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33ac + 0x10c27f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33b0 + 0x10c2804));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33b4 + 0x10c2810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33b8 + 0x10c281c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33bc + 0x10c2828));
    *pcVar5 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  piVar7 = *(int **)(param_1 + 0x34);
  uStack_48 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c33c0 + 0x10c2848));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_UI_ProfileManager__get_Username_1113454(iVar1,0);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar2,*(undefined4 *)(*piVar7 + 0x2b4));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x10),0,0);
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar5 = (char *)(_UNK_010c33c4 + 0x10c28cc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33c8 + 0x10c28e0));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010c33cc + 0x10c28f8);
  puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33d0 + 0x10c2960));
    *pcVar5 = '\x01';
  }
  puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33d4 + 0x10c29d4));
    *pcVar5 = '\x01';
  }
  puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33d8 + 0x10c2a2c));
    *pcVar5 = '\x01';
  }
  puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x28),0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c33dc + 0x10c2aa0));
    *pcVar5 = '\x01';
  }
  puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x38),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_58,1,0,1,0,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*(int *)(**(int **)(_UNK_010c33e0 + 0x10c2b4c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_68,uVar2,0x3f800000,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_78,*(undefined4 *)(param_1 + 0x14),0x3f933333,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0)
  ;
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_78,&uStack_38,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  uStack_38 = uStack_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_88,*(undefined4 *)(param_1 + 0x18),0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0)
  ;
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_88,&uStack_38,uStack_88,uStack_84,uStack_80,uStack_7c,0);
  uStack_38 = uStack_88;
  uStack_34 = uStack_84;
  uStack_30 = uStack_80;
  uStack_2c = uStack_7c;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
  PrimeTween_Tween__Scale_2ce4684(&uStack_98,uVar2,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  piVar7 = *(int **)(_UNK_010c33e4 + 0x10c2d38);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  iVar1 = *piVar7;
  uStack_48 = uStack_98;
  uStack_44 = uStack_94;
  uStack_40 = uStack_90;
  uStack_3c = uStack_8c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(**(int **)(_UNK_010c33e8 + 0x10c2d84) + 0x5c);
    }
    uVar6 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c33ec + 0x10c2d94));
    System_Action_object____ctor_1f11414(iVar8,uVar6,**(undefined4 **)(_UNK_010c33f0 + 0x10c2db4),0)
    ;
    piVar7 = (int *)(*(int *)(**(int **)(_UNK_010c33f4 + 0x10c2dcc) + 0x5c) + 4);
    *piVar7 = iVar8;
    thunk_FUN_00ec5080(piVar7,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_010c33f8 + 0x10c2de4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_58,&uStack_48,uVar2,iVar8,0,**(undefined4 **)(_UNK_010c33fc + 0x10c2e10));
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_68,&uStack_38,0x3dcccccd,0);
  piVar7 = *(int **)(_UNK_010c3400 + 0x10c2e70);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  iVar1 = *piVar7;
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[2];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c3404 + 0x10c2ec4));
    System_Action_object____ctor_1f11414(iVar8,uVar6,**(undefined4 **)(_UNK_010c3408 + 0x10c2ee4),0)
    ;
    piVar4 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
    *piVar4 = iVar8;
    thunk_FUN_00ec5080(piVar4,iVar8);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_58,&uStack_38,uVar2,iVar8,0,**(undefined4 **)(_UNK_010c340c + 0x10c2f14));
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x20),0);
  if (*(int *)(**(int **)(_UNK_010c3410 + 0x10c2f60) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_68,uVar2,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  iVar1 = *piVar7;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uStack_48 = uStack_68;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[3];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c3414 + 0x10c3014));
    System_Action_object____ctor_1f11414(iVar8,uVar6,**(undefined4 **)(_UNK_010c3418 + 0x10c3034),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0xc);
    *piVar7 = iVar8;
    thunk_FUN_00ec5080(piVar7,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_010c341c + 0x10c305c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_58,&uStack_48,uVar2,iVar8,0,**(undefined4 **)(_UNK_010c3420 + 0x10c308c));
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_68,&uStack_38,0x3dcccccd,0);
  piVar7 = *(int **)(_UNK_010c3424 + 0x10c30ec);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  iVar1 = *piVar7;
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[4];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(**(int **)(_UNK_010c3428 + 0x10c3138) + 0x5c);
    }
    uVar6 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c342c + 0x10c3148));
    System_Action_object____ctor_1f11414(iVar8,uVar6,**(undefined4 **)(_UNK_010c3430 + 0x10c3168),0)
    ;
    piVar7 = (int *)(*(int *)(**(int **)(_UNK_010c3434 + 0x10c3180) + 0x5c) + 0x10);
    *piVar7 = iVar8;
    thunk_FUN_00ec5080(piVar7,iVar8);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_58,&uStack_38,uVar2,iVar8,0,**(undefined4 **)(_UNK_010c3438 + 0x10c31a0));
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_68,&uStack_38,0x3e800000,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x28),0);
  if (*(int *)(**(int **)(_UNK_010c343c + 0x10c3208) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_78,uVar2,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  piVar7 = *(int **)(_UNK_010c3440 + 0x10c3270);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  iVar1 = *piVar7;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar3[5];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c3444 + 0x10c32c4));
    System_Action_object____ctor_1f11414(iVar8,uVar6,**(undefined4 **)(_UNK_010c3448 + 0x10c32e4),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x14);
    *piVar7 = iVar8;
    thunk_FUN_00ec5080(piVar7,iVar8);
  }
  if (*(int *)(**(int **)(_UNK_010c344c + 0x10c330c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_58,&uStack_48,uVar2,iVar8,0,**(undefined4 **)(_UNK_010c3450 + 0x10c3338));
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  *(undefined4 *)(param_1 + 0x38) = uStack_58;
  *(undefined4 *)(param_1 + 0x3c) = uStack_54;
  *(undefined4 *)(param_1 + 0x40) = uStack_50;
  *(undefined4 *)(param_1 + 0x44) = uStack_4c;
  thunk_FUN_00ec5080(param_1 + 0x40,0);
  return;
}

