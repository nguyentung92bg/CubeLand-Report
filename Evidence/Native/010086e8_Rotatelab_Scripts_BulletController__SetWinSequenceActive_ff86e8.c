/* IL2CPP: Rotatelab.Scripts.BulletController$$SetWinSequenceActive
void Rotatelab_Scripts_BulletController__SetWinSequenceActive (Rotatelab_Scripts_BulletController_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletController$$SetWinSequenceActive
   void Rotatelab_Scripts_BulletController__SetWinSequenceActive
   (Rotatelab_Scripts_BulletController_o* __this, bool isActive, const MethodInfo* method); */

void Rotatelab_Scripts_BulletController__SetWinSequenceActive_ff86e8(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar3 = 0x20;
  iVar5 = 0x18;
  if (param_2 != 0) {
    iVar3 = 0x24;
    iVar5 = 0x1c;
  }
  iVar8 = *(int *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + iVar5);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + iVar3);
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_2 == 0) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar8 + 0xc);
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10);
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x84));
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c);
  }
  else {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar8 + 0x14);
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18);
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x84));
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x30) + 0x20);
  }
  puVar7 = (undefined4 *)(param_1 + 0x88);
  *puVar7 = *puVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar7 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar7 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

