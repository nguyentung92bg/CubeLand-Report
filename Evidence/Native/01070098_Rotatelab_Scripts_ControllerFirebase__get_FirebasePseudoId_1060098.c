/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$get_FirebasePseudoId
System_String_o* Rotatelab_Scripts_ControllerFirebase__get_FirebasePseudoId (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$get_FirebasePseudoId
   System_String_o* Rotatelab_Scripts_ControllerFirebase__get_FirebasePseudoId (const MethodInfo*
   method); */

undefined4 Rotatelab_Scripts_ControllerFirebase__get_FirebasePseudoId_1060098(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010700f0 + 0x10700a8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010700f4 + 0x10700bc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_010700f8 + 0x10700d0);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  return **(undefined4 **)(iVar1 + 0x5c);
}

