/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$.ctor
void Rotatelab_Debugging_CreativeCanvasController___ctor (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$.ctor
   void Rotatelab_Debugging_CreativeCanvasController___ctor
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

int Rotatelab_Debugging_CreativeCanvasController___ctor_110ea80(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0111eb10 + 0x111ea94);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111eb14 + 0x111eaa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111eb18 + 0x111eab4));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_0111eb1c + 0x111ead0);
  *(undefined4 *)(param_1 + 0x54) = 0x3e4ccccd;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Text_StringBuilder___ctor_2a14a7c(uVar2,0x800,0);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x68),uVar2);
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

