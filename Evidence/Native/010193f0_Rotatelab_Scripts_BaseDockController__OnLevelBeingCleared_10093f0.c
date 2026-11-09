/* IL2CPP: Rotatelab.Scripts.BaseDockController$$OnLevelBeingCleared
void Rotatelab_Scripts_BaseDockController__OnLevelBeingCleared (Rotatelab_Scripts_BaseDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseDockController$$OnLevelBeingCleared
   void Rotatelab_Scripts_BaseDockController__OnLevelBeingCleared
   (Rotatelab_Scripts_BaseDockController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseDockController__OnLevelBeingCleared_10093f0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_010194b4 + 0x1019404);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010194b8 + 0x1019418));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010194bc + 0x101942c);
  piVar4 = (int *)(param_1 + 0x14);
  iVar6 = *piVar4;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar6,0,0);
  if (iVar6 == 0) {
    return;
  }
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_gameObject_35fe360(*piVar4,0);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__DestroyImmediate_36099bc(uVar3,0);
  *piVar4 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

