/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$RemoveSpecialBooster
void Rotatelab_Boosters_BoosterGenerator__RemoveSpecialBooster (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$RemoveSpecialBooster
   void Rotatelab_Boosters_BoosterGenerator__RemoveSpecialBooster
   (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BoosterGenerator__RemoveSpecialBooster_113d094(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  pcVar2 = (char *)(_UNK_0114d158 + 0x114d0a8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d15c + 0x114d0bc));
    *pcVar2 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0114d160 + 0x114d0d4);
  piVar3 = (int *)(param_1 + 0x24);
  iVar4 = *piVar3;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
  if (iVar4 != 0) {
    if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_Component__get_gameObject_35fe360(*piVar3,0);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__Destroy_3609820(uVar1,0);
    *(undefined4 *)(param_1 + 0x24) = 0;
    thunk_FUN_00ec5080(piVar3,0);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}

