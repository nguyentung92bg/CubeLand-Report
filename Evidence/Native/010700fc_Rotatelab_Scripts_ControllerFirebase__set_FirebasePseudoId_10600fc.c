/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$set_FirebasePseudoId
void Rotatelab_Scripts_ControllerFirebase__set_FirebasePseudoId (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$set_FirebasePseudoId
   void Rotatelab_Scripts_ControllerFirebase__set_FirebasePseudoId (System_String_o* value, const
   MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__set_FirebasePseudoId_10600fc(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01070168 + 0x1070110);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107016c + 0x1070124));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01070170 + 0x1070138);
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar5;
  }
  **(undefined4 **)(iVar3 + 0x5c) = param_1;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar5 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar5 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

