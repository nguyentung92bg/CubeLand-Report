/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$FindHealthTextNearestToCamera
TMPro_TextMeshPro_o* Rotatelab_Scripts_MergedBlockController__FindHealthTextNearestToCamera (Rotatelab_Scripts_MergedBlockController_o* __this, System_Collections_Generic_IList_TextMeshPro__o* healthTexts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$FindHealthTextNearestToCamera
   TMPro_TextMeshPro_o* Rotatelab_Scripts_MergedBlockController__FindHealthTextNearestToCamera
   (Rotatelab_Scripts_MergedBlockController_o* __this,
   System_Collections_Generic_IList_TextMeshPro__o* healthTexts, const MethodInfo* method); */

undefined4
Rotatelab_Scripts_MergedBlockController__FindHealthTextNearestToCamera_101af94
          (undefined4 param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  
  pcVar9 = (char *)(_UNK_0102b204 + 0x102afb4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b208 + 0x102afc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102b20c + 0x102afd4));
    *pcVar9 = '\x01';
  }
  iVar3 = UnityEngine_Camera__get_main_35aede4(0);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *param_2;
  uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0102b210 + 0x102b004)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
        goto LAB_0102b04c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_0102b210 + 0x102b004),0);
LAB_0102b04c:
  iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
  if (iVar4 + -1 < 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    iVar4 = iVar4 + -1;
    fVar11 = _UNK_0102b200;
    do {
      iVar6 = *param_2;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_0102b214 + 0x102b080)) {
            puVar5 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
            goto LAB_0102b0c8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_0102b214 + 0x102b080),0);
LAB_0102b0c8:
      iVar6 = (*(code *)*puVar5)(param_2,iVar4,puVar5[1]);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = TMPro_TMP_Text__get_rectTransform_34fc82c(iVar6,0);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(&uStack_44,iVar6,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Camera__WorldToViewportPoint_35aea38
                (&uStack_44,iVar3,uStack_44,uStack_40,fStack_3c,0);
      fVar2 = fStack_3c;
      if (fStack_3c < fVar11) {
        iVar6 = *param_2;
        uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_0102b218 + 0x102b170)) {
              puVar5 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
              goto LAB_0102b1b8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_0102b218 + 0x102b170),0);
LAB_0102b1b8:
        uVar10 = (*(code *)*puVar5)(param_2,iVar4,puVar5[1]);
        fVar11 = fVar2;
      }
      bVar1 = 0 < iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar1);
  }
  return uVar10;
}

