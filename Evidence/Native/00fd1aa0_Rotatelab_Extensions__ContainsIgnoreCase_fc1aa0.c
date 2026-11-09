/* IL2CPP: Rotatelab.Extensions$$ContainsIgnoreCase
bool Rotatelab_Extensions__ContainsIgnoreCase (System_String_o* source, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$ContainsIgnoreCase
   bool Rotatelab_Extensions__ContainsIgnoreCase (System_String_o* source, System_String_o* value,
   const MethodInfo* method); */

uint Rotatelab_Extensions__ContainsIgnoreCase_fc1aa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_00fd1b40 + 0xfd1abc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1b44 + 0xfd1ad0));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_00fd1b48 + 0xfd1ae4);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  piVar4 = (int *)**(undefined4 **)(iVar1 + 0x5c);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar4 + 0x120))(piVar4,param_1,param_2,3,*(undefined4 *)(*piVar4 + 0x124));
  return ~uVar2 >> 0x1f;
}

