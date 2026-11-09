/* IL2CPP: Rotatelab.Scripts.BlasterController$$<ShootingCoroutine>g__OnBulletsDepleted|158_0
void Rotatelab_Scripts_BlasterController___ShootingCoroutine_g__OnBulletsDepleted_158_0 (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01046e5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$<ShootingCoroutine>g__OnBulletsDepleted|158_0
   void Rotatelab_Scripts_BlasterController___ShootingCoroutine_g__OnBulletsDepleted_158_0
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___ShootingCoroutine_g__OnBulletsDepleted_158_0_1039144
               (int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  int *piVar11;
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
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar8 = (char *)(_UNK_0104934c + 0x1049158);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049350 + 0x104916c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049354 + 0x1049178));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049358 + 0x1049184));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104935c + 0x1049190));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049360 + 0x104919c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049364 + 0x10491a8));
    *pcVar8 = '\x01';
  }
  if (param_1[0x44] != 0) {
    pcVar8 = (char *)(_UNK_01046e7c + 0x1046b18);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01046e80 + 0x1046b2c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01046e84 + 0x1046b38));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01046e88 + 0x1046b44));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01046e8c + 0x1046b50));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01046e90 + 0x1046b5c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01046e94 + 0x1046b68));
      *pcVar8 = '\x01';
    }
    puStack_4c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_50 = 0;
    iStack_3c = (int)puStack_4c;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    Rotatelab_Scripts_BlasterController__SetShootingState_1036330(param_1,0);
    pcVar9 = *(code **)(*param_1 + 0x148);
    uVar4 = *(undefined4 *)(*param_1 + 0x14c);
    param_1[0x43] = param_1[0x44];
    param_1[0x44] = 0;
    param_1[0x45] = param_1[0x2d];
    (*pcVar9)(param_1,uVar4);
    iVar1 = Rotatelab_Scripts_BlasterController__get_UsesGhostDockScale_1034040(param_1);
    if (iVar1 == 0) {
      fVar2 = 1.0;
    }
    else {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01046e98 + 0x1046bd8));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar2 = (float)Rotatelab_Scripts_DockManager__get_GhostBlasterScale_1004494(iVar1,0);
    }
    PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
    uStack_50 = uStack_60;
    puStack_4c = (undefined4 *)uStack_5c;
    uStack_48 = uStack_58;
    uStack_44 = piStack_54;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_70,&uStack_50,param_1[0x1c],0);
    uStack_50 = uStack_70;
    puStack_4c = (undefined4 *)uStack_6c;
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58
              (&uStack_80,param_1,fVar2 * _UNK_01046e78,0x3da3d70a,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_80,&uStack_50,uStack_80,uStack_7c,uStack_78,uStack_74,0);
    piVar11 = *(int **)(_UNK_01046e9c + 0x1046ca4);
    iVar1 = *piVar11;
    uStack_50 = uStack_80;
    puStack_4c = (undefined4 *)uStack_7c;
    uStack_48 = uStack_78;
    uStack_44 = uStack_74;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar11;
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x5c);
    iVar7 = puVar5[0xb];
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar5 = *(undefined4 **)(*piVar11 + 0x5c);
      }
      uVar4 = *puVar5;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01046ea0 + 0x1046cf4));
      System_Action_object____ctor_1f11414
                (iVar7,uVar4,**(undefined4 **)(_UNK_01046ea4 + 0x1046d14),0);
      piVar3 = (int *)(*(int *)(*piVar11 + 0x5c) + 0x2c);
      *piVar3 = iVar7;
      thunk_FUN_00ec5080(piVar3,iVar7);
    }
    puVar5 = *(undefined4 **)(_UNK_01046ea8 + 0x1046d4c);
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_60,&uStack_50,param_1,iVar7,0,*puVar5);
    uStack_50 = uStack_60;
    puStack_4c = (undefined4 *)uStack_5c;
    uStack_48 = uStack_58;
    uStack_44 = piStack_54;
    Rotatelab_Scripts_BlasterController__ScaleBlasterVisual_1033f58
              (&uStack_70,param_1,fVar2,0x3df5c28f,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_70,&uStack_50,uStack_70,uStack_6c,uStack_68,uStack_64,0);
    iVar1 = *piVar11;
    uStack_50 = uStack_70;
    puStack_4c = (undefined4 *)uStack_6c;
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar11;
    }
    puVar6 = *(undefined4 **)(iVar1 + 0x5c);
    iVar7 = puVar6[0xc];
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar6 = *(undefined4 **)(*piVar11 + 0x5c);
      }
      uVar4 = *puVar6;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01046eac + 0x1046df8));
      System_Action_object____ctor_1f11414
                (iVar7,uVar4,**(undefined4 **)(_UNK_01046eb0 + 0x1046e18),0);
      piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 0x30);
      *piVar11 = iVar7;
      thunk_FUN_00ec5080(piVar11,iVar7);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_40,&uStack_50,param_1,iVar7,0,*puVar5);
    return;
  }
  iVar1 = Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0(param_1);
  if (iVar1 == 0) {
    pcVar8 = (char *)(_UNK_01047b78 + 0x1047864);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b7c + 0x1047878));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b80 + 0x1047884));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b84 + 0x1047890));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b88 + 0x104789c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b8c + 0x10478a8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b90 + 0x10478b4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b94 + 0x10478c0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b98 + 0x10478cc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01047b9c + 0x10478d8));
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    if (*(char *)((int)param_1 + 0xc1) == '\0') {
      *(undefined1 *)((int)param_1 + 0xc1) = 1;
      Rotatelab_Scripts_BlasterController__CollectJewelHeist_1033e58(param_1);
      (**(code **)(*param_1 + 0x150))(param_1,10,*(undefined4 *)(*param_1 + 0x154));
      piStack_54 = param_1;
      if (param_1[0x46] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_48,param_1[0x46],**(undefined4 **)(_UNK_01047ba0 + 0x1047948));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_50 = 0;
      puVar5 = *(undefined4 **)(_UNK_01047ba4 + 0x1047978);
      piVar11 = *(int **)(_UNK_01047ba8 + 0x1047980);
      puStack_4c = &uStack_38;
      while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                               (&uStack_38,*puVar5), iVar1 != 0) {
        if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Behaviour__set_enabled_35fd7dc(iStack_3c,0,0);
        if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = UnityEngine_Component__get_transform_35fe190(iStack_3c,0);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 1;
        uStack_68 = 0;
        uStack_64 = 0;
        PrimeTween_Tween__Scale_2ce4684(&uStack_48,uVar4,0,0x3ecccccd);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_01047bac + 0x1047a30));
      piVar3 = *(int **)(_UNK_01047bb4 + 0x1047a44);
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar3;
      }
      puVar5 = *(undefined4 **)(iVar1 + 0x5c);
      iVar7 = puVar5[0xd];
      if (iVar7 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          puVar5 = *(undefined4 **)(*piVar3 + 0x5c);
        }
        uVar4 = *puVar5;
        iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01047bb8 + 0x1047a8c));
        System_Action_object____ctor_1f11414
                  (iVar7,uVar4,**(undefined4 **)(_UNK_01047bbc + 0x1047aac),0);
        piVar3 = (int *)(*(int *)(*piVar3 + 0x5c) + 0x34);
        *piVar3 = iVar7;
        thunk_FUN_00ec5080(piVar3,iVar7);
      }
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = **(undefined4 **)(_UNK_01047bc0 + 0x1047af8);
      PrimeTween_Tween__Delay_object__15d6154(&uStack_48,piStack_54,0x3ecccccd,iVar7);
    }
    return;
  }
  piVar11 = *(int **)(_UNK_01049368 + 0x10491e8);
  iVar7 = param_1[0x48];
  iVar1 = *piVar11;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar11;
  }
  puVar5 = *(undefined4 **)(iVar1 + 0x5c);
  iVar10 = puVar5[10];
  if (iVar10 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar4 = *puVar5;
    iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104936c + 0x1049234));
    System_Predicate_object____ctor_1876380
              (iVar10,uVar4,**(undefined4 **)(_UNK_01049370 + 0x1049254),0);
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 0x28);
    *piVar11 = iVar10;
    thunk_FUN_00ec5080(piVar11,iVar10);
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___TrueForAll_267f8d8
                    (iVar7,iVar10,**(undefined4 **)(_UNK_01049374 + 0x104928c));
  if (iVar1 == 0) {
    pcVar9 = *(code **)(*param_1 + 0x150);
    uVar4 = *(undefined4 *)(*param_1 + 0x154);
    *(undefined1 *)((int)param_1 + 0xc3) = 0;
    (*pcVar9)(param_1,6,uVar4);
                    /* WARNING: Could not recover jumptable at 0x01049344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))(param_1,*(undefined4 *)(*param_1 + 0x14c));
    return;
  }
  iVar1 = 0;
  puVar5 = *(undefined4 **)(_UNK_01049378 + 0x10492ac);
  while( true ) {
    if (param_1[0x48] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1[0x48] + 0xc) <= iVar1) {
      return;
    }
    if (param_1[0x48] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = System_Collections_Generic_List_object___get_Item_267d814(param_1[0x48],iVar1,*puVar5);
    if (iVar7 == 0) break;
    Rotatelab_Scripts_BlasterController__Destroy_103784c(iVar7);
    iVar1 = iVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

