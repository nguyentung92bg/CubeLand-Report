/* IL2CPP: Rotatelab.Scripts.GameManager$$.cctor
void Rotatelab_Scripts_GameManager___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$.cctor
   void Rotatelab_Scripts_GameManager___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_GameManager___cctor_1066f30(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01076fcc + 0x1076f40);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076fd0 + 0x1076f54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076fd4 + 0x1076f60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076fd8 + 0x1076f6c));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01076fdc + 0x1076f80));
  Rotatelab_Save_SavedBool___ctor_107ed80(uVar3,**(undefined4 **)(_UNK_01076fe0 + 0x1076f9c),0,0);
  piVar4 = *(int **)(_UNK_01076fe4 + 0x1076fb0);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

