/* IL2CPP: Rotatelab.PreBoosters.PreBoosterGenerator$$Start
void Rotatelab_PreBoosters_PreBoosterGenerator__Start (Rotatelab_PreBoosters_PreBoosterGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBoosterGenerator$$Start
   void Rotatelab_PreBoosters_PreBoosterGenerator__Start
   (Rotatelab_PreBoosters_PreBoosterGenerator_o* __this, const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBoosterGenerator__Start_10ed558(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  pcVar4 = (char *)(_UNK_010fd6e4 + 0x10fd570);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd6e8 + 0x10fd584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd6ec + 0x10fd590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fd6f0 + 0x10fd59c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar5 = 0;
  while( true ) {
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar10 + 0xc) <= (int)uVar5) {
      return;
    }
    if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(iVar10 + 0x10 + uVar5 * 4);
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*(int *)(**(int **)(_UNK_010fd6f4 + 0x10fd610) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar6,uVar1,0,**(undefined4 **)(_UNK_010fd6f8 + 0x10fd634));
    if (iVar2 == 0) break;
    Rotatelab_PreBoosters_PreBooster__Initialize_10ec398(iVar2,uVar7);
    iVar8 = *(int *)(param_1 + 0x18);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar8 + 8);
    uVar11 = *(uint *)(iVar8 + 0xc);
    piVar3 = *(int **)(_UNK_010fd6fc + 0x10fd688);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar11 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar11 + 1;
      piVar3 = (int *)(iVar9 + uVar11 * 4 + 0x10);
      *piVar3 = iVar2;
      thunk_FUN_00ec5080(piVar3,iVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar8,iVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
    }
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

