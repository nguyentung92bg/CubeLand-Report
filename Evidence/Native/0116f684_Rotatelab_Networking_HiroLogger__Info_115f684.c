/* IL2CPP: Rotatelab.Networking.HiroLogger$$Info
void Rotatelab_Networking_HiroLogger__Info (Rotatelab_Networking_HiroLogger_o* __this, System_String_o* message, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroLogger$$Info
   void Rotatelab_Networking_HiroLogger__Info (Rotatelab_Networking_HiroLogger_o* __this,
   System_String_o* message, const MethodInfo* method); */

void Rotatelab_Networking_HiroLogger__Info_115f684(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0116f6f4 + 0x116f69c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116f6f8 + 0x116f6b0));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  if (*(int *)(**(int **)(_UNK_0116f6fc + 0x116f6d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c1d64 + 0x35c1c58);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
    *pcVar6 = '\x01';
  }
  piVar5 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
    *pcVar6 = '\x01';
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar5;
  }
  piVar5 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
        goto LAB_035c1d48;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar5,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar5,3,param_2,puVar2[1]);
  return;
}

