/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$.cctor
void Rotatelab_Debugging_CreativeCanvasController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$.cctor
   void Rotatelab_Debugging_CreativeCanvasController___cctor (const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController___cctor_110eb24(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_r1;
  char *pcVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar3 = (char *)(_UNK_0111ebb8 + 0x111eb38);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ebbc + 0x111eb4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ebc0 + 0x111eb58));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_0111ebc4 + 0x111eb6c) + 0x74);
  if (iVar2 == 0) {
    FUN_00ec3934();
    iVar2 = extraout_r1;
  }
  System_TimeSpan__FromSeconds_2b8a42c(&uStack_10,iVar2,0,0x40240000,0);
  puVar1 = *(undefined4 **)(**(int **)(_UNK_0111ebc8 + 0x111eba0) + 0x5c);
  *puVar1 = uStack_10;
  puVar1[1] = uStack_c;
  return;
}

