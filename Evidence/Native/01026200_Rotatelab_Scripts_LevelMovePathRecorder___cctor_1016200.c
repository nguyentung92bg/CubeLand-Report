/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$.cctor
void Rotatelab_Scripts_LevelMovePathRecorder___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$.cctor
   void Rotatelab_Scripts_LevelMovePathRecorder___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_LevelMovePathRecorder___cctor_1016200(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01026298 + 0x1026210);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102629c + 0x1026224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010262a0 + 0x1026230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010262a4 + 0x102623c));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010262a8 + 0x1026250));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar3,0x40,**(undefined4 **)(_UNK_010262ac + 0x1026268));
  piVar4 = *(int **)(_UNK_010262b0 + 0x102627c);
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

