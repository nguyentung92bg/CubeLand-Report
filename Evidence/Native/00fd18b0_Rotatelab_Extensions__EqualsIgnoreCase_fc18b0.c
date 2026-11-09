/* IL2CPP: Rotatelab.Extensions$$EqualsIgnoreCase
bool Rotatelab_Extensions__EqualsIgnoreCase (System_String_o* source, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$EqualsIgnoreCase
   bool Rotatelab_Extensions__EqualsIgnoreCase (System_String_o* source, System_String_o* value,
   const MethodInfo* method); */

bool Rotatelab_Extensions__EqualsIgnoreCase_fc18b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_00fd194c + 0xfd18cc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1950 + 0xfd18e0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_00fd1954 + 0xfd18f4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  piVar3 = (int *)**(undefined4 **)(iVar1 + 0x5c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar3 + 0xf8))(piVar3,param_1,param_2,3,*(undefined4 *)(*piVar3 + 0xfc));
  return iVar1 == 0;
}

