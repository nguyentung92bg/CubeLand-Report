/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$DestroyAllRemaining
void Rotatelab_Scripts_ColorBoxPlankLayer__DestroyAllRemaining (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$DestroyAllRemaining
   void Rotatelab_Scripts_ColorBoxPlankLayer__DestroyAllRemaining
   (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__DestroyAllRemaining_ffdb5c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar12 = (char *)(_UNK_0100dfc0 + 0x100db7c);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100dfc4 + 0x100db90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100dfc8 + 0x100db9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100dfcc + 0x100dba8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100dfd0 + 0x100dbb4));
    *pcVar12 = '\x01';
  }
  uVar8 = 0;
  piVar13 = *(int **)(_UNK_0100dfd4 + 0x100dbd0);
  do {
    iVar15 = *(int *)(param_1 + 0x14);
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar15 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar14 = *(int *)(param_1 + 0x18);
    iVar15 = *(int *)(iVar15 + uVar8 * 4 + 0x10);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar14 = *(int *)(iVar14 + uVar8 * 4 + 0x10);
    while( true ) {
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar15 + 0xc) <= iVar14) break;
      iVar9 = System_Collections_Generic_List_object___get_Item_267d814
                        (iVar15,iVar14,**(undefined4 **)(_UNK_0100dfd8 + 0x100dc5c));
      iVar10 = *piVar13;
      if (*(int *)(iVar10 + 0x74) == 0) {
        FUN_00ec3934();
        iVar10 = *piVar13;
      }
      uVar11 = *(undefined4 *)(param_1 + 0x30);
      iVar10 = *(int *)(*(int *)(iVar10 + 0x5c) + 0x6c);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(&uStack_40,iVar9,0);
      uVar5 = uStack_38;
      uVar3 = uStack_3c;
      uVar1 = uStack_40;
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_rotation_3614cfc(&uStack_40,iVar9,0);
      uVar7 = uStack_34;
      uVar6 = uStack_38;
      uVar4 = uStack_3c;
      uVar2 = uStack_40;
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_lossyScale_3617374(&uStack_40,iVar9,0);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_Int32Enum__Vector3__Quaternion__float___Raise_23a6f94
                (iVar10,uVar11,uVar1,uVar3,uVar5,uVar2,uVar4,uVar6,uVar7,uStack_40,
                 **(undefined4 **)(_UNK_0100dfdc + 0x100dd34));
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = UnityEngine_Component__get_gameObject_35fe360(iVar9,0);
      piVar13 = *(int **)(_UNK_0100dfe0 + 0x100dd94);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar9,0,0);
      iVar14 = iVar14 + 1;
    }
    iVar14 = *(int *)(param_1 + 0x18);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar14 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(int *)(iVar14 + uVar8 * 4 + 0x10) = *(int *)(iVar15 + 0xc);
    uVar8 = uVar8 + 1;
  } while (uVar8 != 6);
  iVar15 = *(int *)(param_1 + 0x20);
  while( true ) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar14 = *(int *)(param_1 + 0x1c);
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) <= iVar15) {
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar14 + 0xc);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
      return;
    }
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar14 = System_Collections_Generic_List_object___get_Item_267d814
                       (iVar14,iVar15,**(undefined4 **)(_UNK_0100dfe4 + 0x100de3c));
    iVar9 = *piVar13;
    if (*(int *)(iVar9 + 0x74) == 0) {
      FUN_00ec3934();
      iVar9 = *piVar13;
    }
    uVar11 = *(undefined4 *)(param_1 + 0x30);
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x6c);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&uStack_40,iVar14,0);
    uVar5 = uStack_38;
    uVar3 = uStack_3c;
    uVar1 = uStack_40;
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_rotation_3614cfc(&uStack_40,iVar14,0);
    uVar7 = uStack_34;
    uVar6 = uStack_38;
    uVar4 = uStack_3c;
    uVar2 = uStack_40;
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_lossyScale_3617374(&uStack_40,iVar14,0);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Int32Enum__Vector3__Quaternion__float___Raise_23a6f94
              (iVar9,uVar11,uVar1,uVar3,uVar5,uVar2,uVar4,uVar6,uVar7,uStack_40,
               **(undefined4 **)(_UNK_0100dfe8 + 0x100df14));
    if (iVar14 == 0) break;
    iVar14 = UnityEngine_Component__get_gameObject_35fe360(iVar14,0);
    piVar13 = *(int **)(_UNK_0100dfec + 0x100df74);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar14,0,0);
    iVar15 = iVar15 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

