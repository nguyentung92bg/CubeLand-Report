/* IL2CPP: Rotatelab.UI.UiElementHider$$.cctor
void Rotatelab_UI_UiElementHider___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$.cctor
   void Rotatelab_UI_UiElementHider___cctor (const MethodInfo* method); */

void Rotatelab_UI_UiElementHider___cctor_11304dc(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01140574 + 0x11404ec);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140578 + 0x1140500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114057c + 0x114050c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140580 + 0x1140518));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01140584 + 0x114052c));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar3,0x10,**(undefined4 **)(_UNK_01140588 + 0x1140544));
  piVar4 = *(int **)(_UNK_0114058c + 0x1140558);
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

