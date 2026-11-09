/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$GenerateChallenges
void Rotatelab_Shop_StarChallengePopup__GenerateChallenges (Rotatelab_Shop_StarChallengePopup_o* __this, UnityEngine_RectTransform_o* targetRect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$GenerateChallenges
   void Rotatelab_Shop_StarChallengePopup__GenerateChallenges (Rotatelab_Shop_StarChallengePopup_o*
   __this, UnityEngine_RectTransform_o* targetRect, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengePopup__GenerateChallenges_10caea8(int param_1,undefined4 param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_58 [4];
  float fStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar2 = (char *)(_UNK_010db304 + 0x10daecc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db308 + 0x10daee0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db30c + 0x10daeec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db310 + 0x10daef8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db314 + 0x10daf04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db318 + 0x10daf10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db31c + 0x10daf1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db320 + 0x10daf28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db324 + 0x10daf34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db328 + 0x10daf40));
    *pcVar2 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_RectOffset__get_top_35baee4(iVar3,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_RectOffset__get_bottom_35baf54(iVar5,0);
  uVar9 = VectorSignedToFloat(iVar5 + iVar3,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_50,iVar3,**(undefined4 **)(_UNK_010db32c + 0x10daff4));
  uStack_40 = uStack_50;
  uStack_3c = puStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_50 = 0;
  puStack_4c = &uStack_40;
  while( true ) {
    iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&uStack_40,**(undefined4 **)(_UNK_010db340 + 0x10db020));
    uVar9 = uStack_34;
    if (iVar3 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_40,**(undefined4 **)(_UNK_010db344 + 0x10db1c0));
      if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 0xc);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(param_1 + 0x24);
      fVar10 = (float)VectorSignedToFloat(*(int *)(iVar3 + 0xc) + -1,(byte)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x3c) =
           *(float *)(param_1 + 0x3c) + *(float *)(*(int *)(param_1 + 0x2c) + 0x3c) * fVar10;
      if (iVar5 != 0) {
        UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_50,iVar5,0);
        UnityEngine_RectTransform__set_sizeDelta_3613820
                  (iVar5,uStack_50,*(undefined4 *)(param_1 + 0x3c),0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    if (*(int *)(**(int **)(_UNK_010db330 + 0x10db03c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar6,uVar4,**(undefined4 **)(_UNK_010db334 + 0x10db064));
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x38) + 0xc);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (iVar5,uVar9,**(undefined4 **)(_UNK_010db338 + 0x10db0a0));
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x38) + 0xc);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_StarChallenge__Init_10c53d8
              (iVar3,uVar9,uVar4,param_2,*(undefined4 *)(iVar5 + 0xc));
    iVar5 = *(int *)(param_1 + 0x34);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar5 + 8);
    uVar8 = *(uint *)(iVar5 + 0xc);
    piVar1 = *(int **)(_UNK_010db33c + 0x10db128);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    if (iVar7 == 0) break;
    if (uVar8 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar8 + 1;
      piVar1 = (int *)(iVar7 + uVar8 * 4 + 0x10);
      *piVar1 = iVar3;
      thunk_FUN_00ec5080(piVar1,iVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar5,iVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x10) + 0x60) + 0x38));
    }
    fVar10 = *(float *)(param_1 + 0x3c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__get_sizeDelta_3613710(auStack_58,*(int *)(iVar3 + 0x10),0);
    *(float *)(param_1 + 0x3c) = fVar10 + fStack_54;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

