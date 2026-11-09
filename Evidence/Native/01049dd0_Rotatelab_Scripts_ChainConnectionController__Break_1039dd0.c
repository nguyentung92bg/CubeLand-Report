/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$Break
void Rotatelab_Scripts_ChainConnectionController__Break (Rotatelab_Scripts_ChainConnectionController_o* __this, bool playSfx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ChainConnectionController$$Break
   void Rotatelab_Scripts_ChainConnectionController__Break
   (Rotatelab_Scripts_ChainConnectionController_o* __this, bool playSfx, const MethodInfo* method);
    */

void Rotatelab_Scripts_ChainConnectionController__Break_1039dd0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
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
  
  pcVar8 = (char *)(_UNK_0104a6b0 + 0x1049dec);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6b4 + 0x1049e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6b8 + 0x1049e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6bc + 0x1049e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6c0 + 0x1049e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6c4 + 0x1049e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6c8 + 0x1049e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6cc + 0x1049e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6d0 + 0x1049e54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6d4 + 0x1049e60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6d8 + 0x1049e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6dc + 0x1049e78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6e0 + 0x1049e84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6e4 + 0x1049e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6e8 + 0x1049e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6ec + 0x1049ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6f0 + 0x1049eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6f4 + 0x1049ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6f8 + 0x1049ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a6fc + 0x1049ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a700 + 0x1049ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a704 + 0x1049ef0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104a708 + 0x1049efc));
    *pcVar8 = '\x01';
  }
  puStack_54 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  if (*(char *)(param_1 + 0x41) == '\0') {
    *(undefined1 *)(param_1 + 0x41) = 1;
    uStack_44 = puStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_34 = puStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    if (*(char *)(param_1 + 0x40) != '\0' && param_2 != 0) {
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0104a70c + 0x1049f50));
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,0x23,0);
    }
    PrimeTween_Sequence__Create_2cef1e0(&uStack_80,1,0,1,0,0,0);
    uStack_38 = uStack_80;
    uStack_34 = uStack_7c;
    uStack_30 = uStack_78;
    uStack_2c = uStack_74;
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_68,*(int *)(param_1 + 0x44),**(undefined4 **)(_UNK_0104a710 + 0x1049fcc));
    uStack_48 = uStack_68;
    uStack_44 = puStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_68 = 0;
    puVar12 = *(undefined4 **)(_UNK_0104a714 + 0x1049ffc);
    piVar10 = *(int **)(_UNK_0104a718 + 0x104a004);
    puVar14 = *(undefined4 **)(_UNK_0104a71c + 0x104a00c);
    puStack_64 = &uStack_48;
    while (iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_48,*puVar12), uVar13 = uStack_3c, iVar4 != 0) {
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar10;
      }
      puVar7 = *(undefined4 **)(iVar4 + 0x5c);
      iVar9 = puVar7[1];
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
        }
        uVar11 = *puVar7;
        iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104a720 + 0x104a06c));
        System_Action_object____ctor_1f11414
                  (iVar9,uVar11,**(undefined4 **)(_UNK_0104a724 + 0x104a080),0);
        piVar10 = *(int **)(_UNK_0104a728 + 0x104a09c);
        piVar5 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
        *piVar5 = iVar9;
        thunk_FUN_00ec5080(piVar5,iVar9);
      }
      PrimeTween_Sequence__ChainCallback_object__15b4c64
                (&uStack_80,&uStack_38,uVar13,iVar9,0,*puVar14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_48,**(undefined4 **)(_UNK_0104a72c + 0x104a0e0));
    iVar4 = *piVar10;
    uVar13 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar10;
    }
    puVar12 = *(undefined4 **)(iVar4 + 0x5c);
    iVar9 = puVar12[2];
    if (iVar9 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        puVar12 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar11 = *puVar12;
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104a738 + 0x104a13c));
      System_Action_object__float____ctor_1f19254
                (iVar9,uVar11,**(undefined4 **)(_UNK_0104a73c + 0x104a15c),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
      *piVar10 = iVar9;
      thunk_FUN_00ec5080(piVar10,iVar9);
    }
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_80,9,0);
    uVar3 = uStack_74;
    uVar2 = uStack_78;
    uVar1 = uStack_7c;
    uVar11 = uStack_80;
    if (*(int *)(**(int **)(_UNK_0104a740 + 0x104a19c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_object__15d5b3c
              (&uStack_80,uVar13,0,0x3f800000,0x3f000000,iVar9,uVar11,uVar1,uVar2,uVar3,uStack_70,1,
               0,0,0,0,**(undefined4 **)(_UNK_0104a744 + 0x104a1d0));
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_80,&uStack_38,uStack_80,uStack_7c,uStack_78,uStack_74,0);
    piVar10 = *(int **)(_UNK_0104a748 + 0x104a23c);
    iVar4 = *piVar10;
    uStack_58 = uStack_80;
    puStack_54 = (undefined4 *)uStack_7c;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar10;
    }
    piVar5 = *(int **)(_UNK_0104a74c + 0x104a268);
    puVar12 = *(undefined4 **)(iVar4 + 0x5c);
    iVar9 = puVar12[3];
    if (iVar9 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        puVar12 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar13 = *puVar12;
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104a750 + 0x104a298));
      System_Action_object____ctor_1f11414
                (iVar9,uVar13,**(undefined4 **)(_UNK_0104a754 + 0x104a2b8),0);
      piVar6 = (int *)(*(int *)(*piVar10 + 0x5c) + 0xc);
      *piVar6 = iVar9;
      thunk_FUN_00ec5080(piVar6,iVar9);
    }
    puVar12 = *(undefined4 **)(_UNK_0104a758 + 0x104a2ec);
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_80,&uStack_58,param_1,iVar9,0,*puVar12);
    uStack_58 = uStack_80;
    puStack_54 = (undefined4 *)uStack_7c;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(&uStack_68,uVar13,0,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_68,&uStack_58,uStack_68,puStack_64,uStack_60,uStack_5c,0);
    uStack_58 = uStack_68;
    puStack_54 = puStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_90,&uStack_58,0x3f000000,0);
    iVar4 = *piVar10;
    uStack_58 = uStack_90;
    puStack_54 = (undefined4 *)uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar10;
    }
    puVar14 = *(undefined4 **)(iVar4 + 0x5c);
    iVar9 = puVar14[4];
    if (iVar9 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        puVar14 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar13 = *puVar14;
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104a75c + 0x104a418));
      System_Action_object____ctor_1f11414
                (iVar9,uVar13,**(undefined4 **)(_UNK_0104a760 + 0x104a438),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x10);
      *piVar10 = iVar9;
      thunk_FUN_00ec5080(piVar10,iVar9);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_80,&uStack_58,param_1,iVar9,0,*puVar12);
    Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
              (&uStack_80,uStack_74,uStack_80,uStack_7c,uStack_78,uStack_74,0);
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (0 < *(int *)(*(int *)(param_1 + 0x44) + 0xc)) {
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x18),0);
      iVar9 = *(int *)(param_1 + 0x44);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = System_Collections_Generic_List_object___get_Item_267d814
                        (iVar9,*(int *)(iVar9 + 0xc) / 2,
                         **(undefined4 **)(_UNK_0104a764 + 0x104a4f4));
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = UnityEngine_Component__get_transform_35fe190(iVar9,0);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(&uStack_80,iVar9,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_position_3614acc(iVar4,uStack_80,uStack_7c,uStack_78,0);
      piVar10 = *(int **)(_UNK_0104a768 + 0x104a578);
      uVar13 = *(undefined4 *)(param_1 + 0x18);
      iVar4 = *piVar10;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar10;
      }
      puVar12 = *(undefined4 **)(iVar4 + 0x5c);
      iVar9 = puVar12[5];
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          puVar12 = *(undefined4 **)(*piVar10 + 0x5c);
        }
        uVar11 = *puVar12;
        iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104a76c + 0x104a5c4));
        System_Action_object____ctor_1f11414
                  (iVar9,uVar11,**(undefined4 **)(_UNK_0104a770 + 0x104a5e4),0);
        piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x14);
        *piVar10 = iVar9;
        thunk_FUN_00ec5080(piVar10,iVar9);
      }
      PrimeTween_Sequence__InsertCallback_object__15b4ee8
                (&uStack_80,&uStack_38,0x3f000000,uVar13,iVar9,0,
                 **(undefined4 **)(_UNK_0104a774 + 0x104a618));
      uVar13 = UnityEngine_Time__get_time_3610900(0);
      *(undefined4 *)(param_1 + 0x48) = uVar13;
    }
  }
  return;
}

