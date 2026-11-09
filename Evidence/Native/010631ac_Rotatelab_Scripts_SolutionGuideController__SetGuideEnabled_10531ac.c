/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$SetGuideEnabled
void Rotatelab_Scripts_SolutionGuideController__SetGuideEnabled (Rotatelab_Scripts_SolutionGuideController_o* __this, bool isEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SolutionGuideController$$SetGuideEnabled
   void Rotatelab_Scripts_SolutionGuideController__SetGuideEnabled
   (Rotatelab_Scripts_SolutionGuideController_o* __this, bool isEnabled, const MethodInfo* method);
    */

void Rotatelab_Scripts_SolutionGuideController__SetGuideEnabled_10531ac(int param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if ((*(char *)(param_1 + 0x2c) != '\0') == param_2) {
    return;
  }
  *(char *)(param_1 + 0x2c) = (char)param_2;
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    pcVar6 = (char *)(_UNK_0106330c + 0x106320c);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01063310 + 0x1063220));
      *pcVar6 = '\x01';
    }
    if (*(char *)(param_1 + 0x2c) != '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x24) < *(int *)(*(int *)(param_1 + 0x20) + 0xc)) {
        iVar7 = *(int *)(param_1 + 0x28);
        iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_01063314 + 0x106325c));
        iVar8 = *(int *)(param_1 + 0x20);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar8 + 0xc) <= *(uint *)(param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = Rotatelab_Scripts_PlaceableManager__GetFrontBlaster_104ab24
                          (iVar3,*(undefined4 *)(iVar8 + *(uint *)(param_1 + 0x24) * 4 + 0x10));
        if (iVar7 != 0) {
          Rotatelab_Scripts_BlasterHighlight__ShowOn_ff62f8(iVar7,uVar4,0,0,0,0,0,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  pcVar6 = (char *)(_UNK_010064e0 + 0x100642c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010064e4 + 0x1006440),0);
    *pcVar6 = '\x01';
  }
  puVar5 = (undefined4 *)(iVar3 + 0x1c);
  uVar4 = *puVar5;
  if (*(int *)(**(int **)(_UNK_010064e8 + 0x1006458) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  if (iVar7 != 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterController__SetBulletCountHighlighted_10353e4
            (*(int *)(iVar3 + 0x1c),0,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
             *(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),
             *(undefined4 *)(iVar3 + 0x18),0);
  *puVar5 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

