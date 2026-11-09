/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$LogError
void Rotatelab_CloudRush_CloudRushController__LogError (Rotatelab_CloudRush_CloudRushController_o* __this, System_String_o* log, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$LogError
   void Rotatelab_CloudRush_CloudRushController__LogError
   (Rotatelab_CloudRush_CloudRushController_o* __this, System_String_o* log, const MethodInfo*
   method); */

void Rotatelab_CloudRush_CloudRushController__LogError_10de6e0
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_010ee73c + 0x10ee6f4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ee740 + 0x10ee708));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010ee744 + 0x10ee71c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c24ac + 0x35c23a0);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b0 + 0x35c23b4),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24b4 + 0x35c23c0));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_035c24b8 + 0x35c23d4);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_035c24bc + 0x35c23f0);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c24c0 + 0x35c2404));
    *pcVar5 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar6;
  }
  piVar6 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_035c24c4 + 0x35c2448)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
        goto LAB_035c2490;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c24c4 + 0x35c2448),3);
LAB_035c2490:
                    /* WARNING: Could not recover jumptable at 0x035c24a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,0,param_2,puVar2[1]);
  return;
}

