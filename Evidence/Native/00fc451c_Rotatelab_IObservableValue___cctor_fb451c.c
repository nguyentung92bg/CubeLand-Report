/* IL2CPP: Rotatelab.IObservableValue$$.cctor
void Rotatelab_IObservableValue___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IObservableValue$$.cctor
   void Rotatelab_IObservableValue___cctor (const MethodInfo* method); */

void Rotatelab_IObservableValue___cctor_fb451c(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_00fc45b4 + 0xfc452c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc45b8 + 0xfc4540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc45bc + 0xfc454c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc45c0 + 0xfc4558));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc45c4 + 0xfc456c));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar3,0x80,**(undefined4 **)(_UNK_00fc45c8 + 0xfc4584));
  piVar4 = *(int **)(_UNK_00fc45cc + 0xfc4598);
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

