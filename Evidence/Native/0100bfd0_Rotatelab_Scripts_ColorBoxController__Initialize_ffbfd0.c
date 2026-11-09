/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$Initialize
void Rotatelab_Scripts_ColorBoxController__Initialize (Rotatelab_Scripts_ColorBoxController_o* __this, Rotatelab_ColorBoxData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$Initialize
   void Rotatelab_Scripts_ColorBoxController__Initialize (Rotatelab_Scripts_ColorBoxController_o*
   __this, Rotatelab_ColorBoxData_o* data, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxController__Initialize_ffbfd0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pcVar10 = (char *)(_UNK_0100c714 + 0x100bff4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c718 + 0x100c008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c71c + 0x100c014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c720 + 0x100c020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c724 + 0x100c02c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c728 + 0x100c038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c72c + 0x100c044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c730 + 0x100c050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c734 + 0x100c05c));
    *pcVar10 = '\x01';
  }
  piVar3 = (int *)(param_1 + 0x10);
  *piVar3 = param_2;
  thunk_FUN_00ec5080(piVar3,param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x20);
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x10),0);
  iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar10 = (char *)(_UNK_0100c738 + 0x100c0e8);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c73c + 0x100c0fc));
    *pcVar10 = '\x01';
  }
  iVar5 = *(int *)(**(int **)(_UNK_0100c740 + 0x100c118) + 0x5c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar4,*(float *)(iVar5 + 0xc) * _UNK_0100c504,*(float *)(iVar5 + 0x10) * _UNK_0100c504,
             *(float *)(iVar5 + 0x14) * _UNK_0100c504,0);
  puVar6 = *(undefined4 **)(_UNK_0100c744 + 0x100c170);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *puVar6;
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar7 = thunk_FUN_00f00cdc(uVar7);
  UnityEngine_MaterialPropertyBlock___ctor_35c3c50(uVar7,0);
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x38),uVar7);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = 0x3f000000;
  Rotatelab_Scripts_MergedBlockController__GenerateMesh_1010980
            (*(int *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
             *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
             *(undefined4 *)(param_2 + 0x1c),0x3f000000,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__GetComponent_object__143f3b0
                    (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_0100c748 + 0x100c21c));
  piVar11 = (int *)(param_1 + 0x2c);
  *piVar11 = iVar4;
  thunk_FUN_00ec5080(piVar11,iVar4);
  iVar5 = *piVar11;
  iVar4 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0100c74c + 0x100c248));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Scripts_ColorBoxColorDataSO__GetDataByType_ff4f68
                    (iVar4,*(undefined4 *)(param_2 + 0x20));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_sharedMaterial_35c59bc(iVar5,*(undefined4 *)(iVar4 + 0xc),0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Scripts_MergedBlockController__GenerateHealthTexts_1010e58
                    (*(int *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x28),
                     *(float *)(param_2 + 0x14) + *(float *)(param_2 + 0x14),
                     *(float *)(param_2 + 0x18) + *(float *)(param_2 + 0x18),
                     *(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x1c),0);
  piVar11 = (int *)(param_1 + 0x28);
  *piVar11 = iVar4;
  thunk_FUN_00ec5080(piVar11,iVar4);
  fVar2 = _UNK_0100c710;
  fVar1 = _UNK_0100c70c;
  fVar15 = *(float *)(param_2 + 0x14);
  iVar4 = 4;
  fVar16 = *(float *)(param_2 + 0x18);
  fVar17 = *(float *)(param_2 + 0x1c);
  while( true ) {
    if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar12 = iVar4 - 4;
    if (*(int *)(*piVar11 + 0xc) <= (int)uVar12) {
      uVar12 = 0;
      while( true ) {
        if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*piVar11 + 0xc) <= (int)uVar12) {
          if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x18),0);
          pcVar10 = (char *)(_UNK_0100c750 + 0x100c534);
          if (*pcVar10 == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0100c754 + 0x100c548));
            *pcVar10 = '\x01';
          }
          iVar5 = *(int *)(**(int **)(_UNK_0100c758 + 0x100c560) + 0x5c);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Transform__set_localScale_36155dc
                    (iVar4,*(float *)(iVar5 + 0xc) * fVar1,*(float *)(iVar5 + 0x10) * fVar1,
                     *(float *)(iVar5 + 0x14) * fVar1,0);
          Rotatelab_Scripts_ColorBoxController__UpdateHealthTexts_ffc770(param_1);
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Scripts_ColorBoxPlankLayer__Initialize_ffc820
                    (*(int *)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),
                     *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                     *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),uVar7,
                     *(undefined4 *)(param_2 + 0x28),0x3f866666);
          iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0100c75c + 0x100c62c));
          if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          Rotatelab_Grid_GridManager__AddToGrid_1106f50
                    (iVar4,param_1,*(undefined4 *)(*piVar3 + 0x2c),0);
          piVar3 = *(int **)(_UNK_0100c760 + 0x100c67c);
          iVar4 = *piVar3;
          if (*(int *)(iVar4 + 0x74) == 0) {
            FUN_00ec3934();
            iVar4 = *piVar3;
          }
          uVar9 = **(undefined4 **)(iVar4 + 0x5c);
          uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100c764 + 0x100c6a0));
          System_Action_Int32Enum__int____ctor_1f18658
                    (uVar7,param_1,**(undefined4 **)(_UNK_0100c768 + 0x100c6c0),0);
          uVar7 = Rotatelab_GameAction_Int32Enum__int___op_Addition_23a45f4
                            (uVar9,uVar7,**(undefined4 **)(_UNK_0100c76c + 0x100c6d8));
          **(undefined4 **)(*piVar3 + 0x5c) = uVar7;
          thunk_FUN_00ec5080(*(undefined4 *)(*piVar3 + 0x5c));
          return;
        }
        iVar4 = *piVar11;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar4 = *(int *)(iVar4 + uVar12 * 4 + 0x10);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = TMPro_TMP_Text__get_rectTransform_34fc82c(iVar4,0);
        uVar9 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (iVar4 == 0) break;
        UnityEngine_Transform__SetParent_3615994(iVar4,uVar9,1,0);
        uVar12 = uVar12 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(param_2 + 0x28);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar5 + iVar4 * 4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar18 = *(float *)(iVar5 + 0x14);
    fVar19 = *(float *)(iVar5 + 0x18);
    fVar14 = *(float *)(iVar5 + 0x1c);
    iVar5 = *piVar11;
    if (iVar5 == 0) break;
    if (*(uint *)(iVar5 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar5 + iVar4 * 4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = TMPro_TMP_Text__get_rectTransform_34fc82c(iVar5,0);
    iVar8 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar13 = (ABS(fVar16 * fVar19 + fVar15 * fVar18 + fVar17 * fVar14) + 0.5 + fVar2) * fVar1;
    UnityEngine_Transform__TransformPoint_3616968
              (&uStack_74,iVar8,fVar18 * fVar13,fVar19 * fVar13,fVar14 * fVar13,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_position_3614acc(iVar5,uStack_74,uStack_70,uStack_6c,0);
    iVar4 = iVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

