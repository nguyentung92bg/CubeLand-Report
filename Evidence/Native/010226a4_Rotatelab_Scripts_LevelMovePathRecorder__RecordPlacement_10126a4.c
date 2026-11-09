/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$RecordPlacement
void Rotatelab_Scripts_LevelMovePathRecorder__RecordPlacement (Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$RecordPlacement
   void Rotatelab_Scripts_LevelMovePathRecorder__RecordPlacement
   (Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method); */

void Rotatelab_Scripts_LevelMovePathRecorder__RecordPlacement_10126a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_010227e4 + 0x10226bc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010227e8 + 0x10226d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010227ec + 0x10226dc));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010227f0 + 0x10226f4);
  uStack_1c = 0;
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  piVar4 = *(int **)(iVar1 + 0x5c);
  if ((char)piVar4[2] != '\0') {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      piVar4 = *(int **)(*piVar6 + 0x5c);
    }
    iVar1 = *piVar4;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_1c = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(param_1,0);
    uVar2 = System_Int32__ToString_2b6b9ec(&uStack_1c,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0xc);
    piVar6 = *(int **)(_UNK_010227f4 + 0x1022790);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar8 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar8 + 1;
      puVar3 = (undefined4 *)(iVar7 + uVar8 * 4 + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_00ec5080(puVar3,uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
    }
  }
  return;
}

