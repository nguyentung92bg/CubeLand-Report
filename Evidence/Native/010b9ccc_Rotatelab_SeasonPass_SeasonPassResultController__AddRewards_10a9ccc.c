/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$AddRewards
void Rotatelab_SeasonPass_SeasonPassResultController__AddRewards (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, System_Collections_Generic_List_SeasonPassSo_SeasonReward__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$AddRewards
   void Rotatelab_SeasonPass_SeasonPassResultController__AddRewards
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this,
   System_Collections_Generic_List_SeasonPassSo_SeasonReward__o* rewards, const MethodInfo* method);
    */

void Rotatelab_SeasonPass_SeasonPassResultController__AddRewards_10a9ccc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_010ba20c + 0x10b9ce8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba210 + 0x10b9cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba214 + 0x10b9d08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba218 + 0x10b9d14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba21c + 0x10b9d20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba220 + 0x10b9d2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba224 + 0x10b9d38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba228 + 0x10b9d44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba22c + 0x10b9d50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba230 + 0x10b9d5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba234 + 0x10b9d68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba238 + 0x10b9d74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba23c + 0x10b9d80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba240 + 0x10b9d8c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_3c = 0;
  uStack_40 = 0;
  if (*(int *)(**(int **)(_UNK_010ba244 + 0x10b9da8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__Log_35b1c44(**(undefined4 **)(_UNK_010ba248 + 0x10b9ddc),0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_50,param_2,**(undefined4 **)(_UNK_010ba24c + 0x10b9e00));
  uStack_38 = uStack_50;
  uStack_34 = puStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  uStack_50 = 0;
  puStack_4c = &uStack_38;
  while( true ) {
    while( true ) {
      iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_38,**(undefined4 **)(_UNK_010ba26c + 0x10b9e28));
      if (iVar1 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_38,**(undefined4 **)(_UNK_010ba270 + 0x10ba154));
        return;
      }
      iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ba250 + 0x10b9e44));
      System_Object___ctor_2bb93bc(iVar1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar11 = (int *)(iVar1 + 8);
      *piVar11 = iStack_2c;
      thunk_FUN_00ec5080(piVar11,iStack_2c);
      if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 0x44) + 0x20);
      if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = Rotatelab_SeasonPass_SeasonPassSo__GetRewardType_10a2798
                        (iVar7,*(undefined4 *)(*piVar11 + 0xc));
      uVar8 = *(undefined4 *)(param_1 + 0x48);
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ba254 + 0x10b9ecc));
      System_Predicate_object____ctor_1876380
                (uVar2,iVar1,**(undefined4 **)(_UNK_010ba258 + 0x10b9ee0),0);
      if (*(int *)(**(int **)(_UNK_010ba25c + 0x10b9efc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = Rotatelab_Extensions__TryFind_object__14899b0
                        (uVar8,uVar2,&iStack_3c,**(undefined4 **)(_UNK_010ba260 + 0x10b9f18));
      iVar1 = iStack_3c;
      if (iVar3 == 0) break;
      if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = *(uint *)(iStack_3c + 0x18);
      iVar3 = *piVar11;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = *(uint *)(iVar3 + 0x18);
      iVar3 = *(int *)(iVar3 + 0x1c);
      *(uint *)(iStack_3c + 0x18) = uVar4 + uVar9;
      *(uint *)(iStack_3c + 0x1c) = iVar3 + *(int *)(iStack_3c + 0x1c) + (uint)CARRY4(uVar4,uVar9);
      if (iVar7 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(iVar7 + 0x10);
      }
      if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_40 = FUN_00f88368(*(undefined4 *)(iStack_3c + 0x18),*(undefined4 *)(iStack_3c + 0x1c));
      uStack_40 = uStack_40 & 0x7fffffff;
      uVar8 = System_Single__ToString_2b8501c(&uStack_40,0);
      if (iVar7 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar7 + 0x14);
      }
      uVar2 = System_String__Concat_2a0b574(uVar2,uVar8,uVar5,0);
      *(undefined4 *)(iVar1 + 0x20) = uVar2;
      thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x20));
    }
    iVar3 = *(int *)(param_1 + 0x48);
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ba264 + 0x10b9fe0));
    System_Object___ctor_2bb93bc(iVar1,0);
    if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *piVar11;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*piVar11 + 0xc);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar10 + 0x1c);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar10 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar10 + 0x10);
    thunk_FUN_00ec5080();
    iVar10 = *piVar11;
    if (iVar7 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar7 + 0x10);
    }
    if (iVar10 == 0) break;
    uStack_40 = FUN_00f88368(*(undefined4 *)(iVar10 + 0x18),*(undefined4 *)(iVar10 + 0x1c));
    uStack_40 = uStack_40 & 0x7fffffff;
    uVar8 = System_Single__ToString_2b8501c(&uStack_40,0);
    if (iVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar7 + 0x14);
    }
    uVar2 = System_String__Concat_2a0b574(uVar2,uVar8,uVar5,0);
    *(undefined4 *)(iVar1 + 0x20) = uVar2;
    thunk_FUN_00ec5080();
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(uint *)(iVar3 + 0xc);
    piVar11 = *(int **)(_UNK_010ba268 + 0x10ba0f8);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar9 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar9 + 1;
      piVar11 = (int *)(iVar7 + uVar9 * 4 + 0x10);
      *piVar11 = iVar1;
      thunk_FUN_00ec5080(piVar11,iVar1);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar3,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

