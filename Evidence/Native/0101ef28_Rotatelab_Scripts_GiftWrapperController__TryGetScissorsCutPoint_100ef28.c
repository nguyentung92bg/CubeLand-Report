/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$TryGetScissorsCutPoint
bool Rotatelab_Scripts_GiftWrapperController__TryGetScissorsCutPoint (Rotatelab_Scripts_GiftWrapperController_o* __this, UnityEngine_Transform_o** target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$TryGetScissorsCutPoint
   bool Rotatelab_Scripts_GiftWrapperController__TryGetScissorsCutPoint
   (Rotatelab_Scripts_GiftWrapperController_o* __this, UnityEngine_Transform_o** target, const
   MethodInfo* method); */

bool Rotatelab_Scripts_GiftWrapperController__TryGetScissorsCutPoint_100ef28
               (int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pcVar9 = (char *)(_UNK_0101f2f0 + 0x101ef4c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f2f4 + 0x101ef60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f2f8 + 0x101ef6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f2fc + 0x101ef78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f300 + 0x101ef84));
    *pcVar9 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101f304 + 0x101ef9c));
  pcVar9 = (char *)(_UNK_0101f308 + 0x101efb0);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101f30c + 0x101efc4));
    *pcVar9 = '\x01';
  }
  iVar12 = 0;
  uVar13 = 0;
  iVar11 = 0;
  piVar2 = *(int **)(**(int **)(_UNK_0101f310 + 0x101efe4) + 0x5c);
  iStack_60 = *piVar2;
  iStack_5c = piVar2[1];
  iStack_58 = piVar2[2];
  while( true ) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar10 + 0xc) <= (int)uVar13) {
      if (iVar11 < 0x1a) {
        *param_2 = 0;
        thunk_FUN_00ec5080();
      }
      else {
        iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0101f314 + 0x101f128));
        UnityEngine_GameObject___ctor_360257c(iVar1,**(undefined4 **)(_UNK_0101f318 + 0x101f140),0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = UnityEngine_GameObject__get_transform_3601c90(iVar1,0);
        *param_2 = iVar1;
        thunk_FUN_00ec5080(param_2,iVar1);
        iVar12 = *param_2;
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0101f31c + 0x101f184));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__SetParent_3615994(iVar12,*(undefined4 *)(iVar1 + 0x50),0,0);
        iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__get_localScale_36154c0(&fStack_54,iVar1,0);
        fVar3 = (float)UnityEngine_Random__Range_35f8ac0
                                 (*(uint *)(param_1 + 0x30) ^ 0x80000000,*(uint *)(param_1 + 0x30),0
                                 );
        fVar4 = (float)UnityEngine_Random__Range_35f8ac0
                                 (*(uint *)(param_1 + 0x30) ^ 0x80000000,*(uint *)(param_1 + 0x30),0
                                 );
        fVar5 = (float)UnityEngine_Random__Range_35f8ac0
                                 (*(uint *)(param_1 + 0x30) ^ 0x80000000,*(uint *)(param_1 + 0x30),0
                                 );
        uVar6 = func_0x00f88028(iStack_60,iVar11);
        uVar7 = func_0x00f88028(iStack_5c,iVar11);
        uVar8 = func_0x00f88028(iStack_58,iVar11);
        fVar14 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
        fVar15 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
        fVar16 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
        if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__set_localPosition_3613c6c
                  (*param_2,fVar14 + fStack_54 * fVar3,fVar15 + fStack_50 * fVar4,
                   fVar16 + fStack_4c * fVar5,0);
      }
      return 0x19 < iVar11;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar10 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar10 = iVar10 + iVar12;
    if (iVar1 == 0) break;
    iVar10 = Rotatelab_Grid_GridManager__GetGridCell_1106d80
                       (iVar1,*(undefined4 *)(iVar10 + 0x10),*(undefined4 *)(iVar10 + 0x14),
                        *(undefined4 *)(iVar10 + 0x18),0);
    if (*(char *)(iVar10 + 8) != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar10 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar10 = iVar10 + iVar12;
      iVar11 = iVar11 + 1;
      iStack_58 = *(int *)(iVar10 + 0x18) + iStack_58;
      iStack_5c = *(int *)(iVar10 + 0x14) + iStack_5c;
      iStack_60 = *(int *)(iVar10 + 0x10) + iStack_60;
    }
    iVar12 = iVar12 + 0xc;
    uVar13 = uVar13 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

