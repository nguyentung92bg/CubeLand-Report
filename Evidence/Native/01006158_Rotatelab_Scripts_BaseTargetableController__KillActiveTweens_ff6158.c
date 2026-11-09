/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$KillActiveTweens
void Rotatelab_Scripts_BaseTargetableController__KillActiveTweens (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02cfd5d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$KillActiveTweens
   void Rotatelab_Scripts_BaseTargetableController__KillActiveTweens
   (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseTargetableController__KillActiveTweens_ff6158(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  puVar4 = (undefined8 *)(param_1 + 0x28);
  iVar6 = PrimeTween_Sequence__get_isAlive_2ceece0(puVar4,0);
  if (iVar6 == 0) {
    return;
  }
  iVar6 = PrimeTween_Sequence__TryManipulate_2cef084(puVar4,0);
  if (iVar6 == 0) {
    return;
  }
  pcVar7 = (char *)(_UNK_02cfd678 + 0x2cfd4e4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02cfd67c + 0x2cfd4f8));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar9 = *puVar4;
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  thunk_FUN_00ec5080(&uStack_50,0);
  uStack_48 = 0;
  thunk_FUN_00ec5080(&uStack_48,0);
  uVar1 = uStack_44;
  uStack_58 = (undefined4)uVar9;
  uStack_54 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_30 = CONCAT44(uVar1,uStack_48) & 0xffffff00ffffffff;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  uStack_38 = (undefined4)uStack_50;
  uStack_34 = uStack_50._4_4_;
  PrimeTween_Sequence_SequenceChildrenEnumerator__MoveNext_2cedad8(&uStack_40);
  iVar6 = (int)uStack_30;
  do {
    bVar3 = PrimeTween_Sequence_SequenceChildrenEnumerator__MoveNext_2cedad8(&uStack_40);
    iVar2 = (int)uStack_30;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = PrimeTween_TweenArray__get_Item_2cf4b68
                      (*(int *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc));
    if (*(int *)(iVar6 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(iVar6 + 0xc);
    iVar6 = *(int *)(*(int *)(iVar6 + 8) + 0x18);
    if (*(int *)(**(int **)(_UNK_02cfd680 + 0x2cfd634) + 0x74) == 0) {
      FUN_00ec3934();
    }
    *(uint *)(iVar6 + iVar8 * 0x40) = *(uint *)(iVar6 + iVar8 * 0x40) & 0xfffffeff;
    PrimeTween_Sequence__ReleaseTween_2cf11ec(uVar5);
    iVar6 = iVar2;
  } while ((bVar3 & iVar2 != 0) != 0);
  return;
}

