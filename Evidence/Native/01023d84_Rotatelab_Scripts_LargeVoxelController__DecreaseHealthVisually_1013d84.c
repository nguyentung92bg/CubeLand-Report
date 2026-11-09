/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$DecreaseHealthVisually
void Rotatelab_Scripts_LargeVoxelController__DecreaseHealthVisually (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LargeVoxelController$$DecreaseHealthVisually
   void Rotatelab_Scripts_LargeVoxelController__DecreaseHealthVisually
   (Rotatelab_Scripts_LargeVoxelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LargeVoxelController__DecreaseHealthVisually_1013d84(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  uint in_fpscr;
  float fVar15;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_01023e78 + 0x1023d98);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01023e7c + 0x1023dac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01023e80 + 0x1023db8));
    *pcVar9 = '\x01';
  }
  param_1[0x13] = param_1[0x13] + -1;
  Rotatelab_Scripts_LargeVoxelController__UpdateHealthTexts_1013918(param_1);
  Rotatelab_Scripts_LargeVoxelController__AnimatePunch_1013e8c(param_1);
  if (param_1[0x13] < 1) {
    piVar13 = (int *)param_1[0xf];
    if (piVar13 != (int *)0x0) {
      uVar8 = (uint)*(byte *)(**(int **)(_UNK_01023e84 + 0x1023e3c) + 0xb8);
      if ((uVar8 <= *(byte *)(*piVar13 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar13 + 100) + uVar8 * 4 + -4) ==
          **(int **)(_UNK_01023e84 + 0x1023e3c))) {
        pcVar9 = (char *)(_UNK_010242ec + 0x1024004);
        if (*pcVar9 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_010242f0 + 0x1024018));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010242f4 + 0x1024024));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010242f8 + 0x1024030));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010242fc + 0x102403c));
          FUN_00ec37c0(*(undefined4 *)(_UNK_01024300 + 0x1024048));
          *pcVar9 = '\x01';
        }
        iVar4 = piVar13[0xe];
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        piVar13[0xe] = iVar4 + -1;
        uStack_38 = 0;
        if (iVar4 + -1 < 1) {
          if (piVar13[8] == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Scripts_LargeVoxelController__OnVisualHealthDepleted_1014318(piVar13[8]);
          if (piVar13[9] == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Scripts_LargeVoxelController__OnVisualHealthDepleted_1014318(piVar13[9]);
          PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
          uVar5 = UnityEngine_Component__get_transform_35fe190(piVar13,0);
          PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,5,0);
          uVar3 = uStack_50;
          uVar2 = uStack_54;
          uVar1 = uStack_58;
          uVar12 = uStack_5c;
          uVar14 = uStack_60;
          if (*(int *)(**(int **)(_UNK_01024304 + 0x10240fc) + 0x74) == 0) {
            FUN_00ec3934();
          }
          PrimeTween_Tween__Scale_2ce4684
                    (&uStack_60,uVar5,0x3f9c28f6,0x3d75c28f,uVar14,uVar12,uVar1,uVar2,uVar3,1,0,0,0,
                     0,0);
          PrimeTween_Sequence__Chain_2cee04c
                    (&uStack_70,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
          uStack_38 = uStack_70;
          uStack_34 = uStack_6c;
          uStack_30 = uStack_68;
          uStack_2c = uStack_64;
          uVar14 = UnityEngine_Component__get_transform_35fe190(piVar13,0);
          PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,6,0);
          PrimeTween_Tween__Scale_2ce4684
                    (&uStack_60,uVar14,0,0x3e19999a,uStack_60,uStack_5c,uStack_58,uStack_54,
                     uStack_50,1,0,0,0,0,0);
          PrimeTween_Sequence__Chain_2cee04c
                    (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
          uStack_38 = uStack_60;
          uStack_34 = uStack_5c;
          uStack_30 = uStack_58;
          uStack_2c = uStack_54;
          uVar14 = UnityEngine_Component__get_gameObject_35fe360(piVar13,0);
          piVar13 = *(int **)(_UNK_01024308 + 0x1024238);
          iVar4 = *piVar13;
          if (*(int *)(iVar4 + 0x74) == 0) {
            FUN_00ec3934();
            iVar4 = *piVar13;
          }
          puVar6 = *(undefined4 **)(iVar4 + 0x5c);
          iVar7 = puVar6[1];
          if (iVar7 == 0) {
            if (*(int *)(iVar4 + 0x74) == 0) {
              FUN_00ec3934();
              puVar6 = *(undefined4 **)(*piVar13 + 0x5c);
            }
            uVar12 = *puVar6;
            iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102430c + 0x1024280));
            System_Action_object____ctor_1f11414
                      (iVar7,uVar12,**(undefined4 **)(_UNK_01024310 + 0x10242a0),0);
            piVar13 = (int *)(*(int *)(*piVar13 + 0x5c) + 4);
            *piVar13 = iVar7;
            thunk_FUN_00ec5080(piVar13,iVar7);
          }
          PrimeTween_Sequence__ChainCallback_object__15b4c64
                    (&uStack_60,&uStack_38,uVar14,iVar7,0,
                     **(undefined4 **)(_UNK_01024314 + 0x10242d0));
        }
        return;
      }
    }
    pcVar9 = (char *)(_UNK_01024398 + 0x102432c);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0102439c + 0x1024340));
      *pcVar9 = '\x01';
    }
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010243a0 + 0x1024354));
    if (iVar4 != 0) {
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,0x15,0);
      Rotatelab_Scripts_LargeVoxelController__AnimateBreakParticle_1014498(param_1);
                    /* WARNING: Could not recover jumptable at 0x01024394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01023e88 + 0x1023df4));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,0xc,0);
  pcVar9 = (char *)(_UNK_01024488 + 0x10243bc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102448c + 0x10243d0));
    *pcVar9 = '\x01';
  }
  if (param_1[0xe] != 0) {
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(param_1[0xe] + 0x24),
                                        (byte)(in_fpscr >> 0x16) & 3);
    piVar13 = *(int **)(_UNK_01024490 + 0x1024404);
    iVar10 = param_1[0x15];
    iVar4 = *piVar13;
    iVar7 = *(int *)(iVar4 + 0x74);
    fVar15 = (float)param_1[0x14] + 1.0 / fVar15;
    param_1[0x14] = (int)fVar15;
    if (iVar7 == 0) {
      FUN_00ec3934();
      iVar4 = *piVar13;
      fVar15 = (float)param_1[0x14];
    }
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
              (iVar10,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x48),fVar15,0);
    iVar10 = param_1[4];
    iVar7 = param_1[0x10];
    iVar4 = param_1[0x15];
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar9 = (char *)(_UNK_035d5090 + 0x35d5004);
    if (*pcVar9 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d5094 + 0x35d5018),iVar4,iVar7,0);
      *pcVar9 = '\x01';
    }
    if (iVar10 != 0) {
      iVar11 = *(int *)(iVar10 + 8);
      if (iVar11 != 0) {
        if (iVar4 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined4 *)(iVar4 + 8);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d5098 + 0x35d505c);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d509c + 0x35d506c);
          *(code **)(_UNK_035d50a0 + 0x35d507c) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035d508c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar11,uVar14,iVar7);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar10,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

