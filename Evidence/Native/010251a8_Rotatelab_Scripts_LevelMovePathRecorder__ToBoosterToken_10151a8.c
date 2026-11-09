/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$ToBoosterToken
System_String_o* Rotatelab_Scripts_LevelMovePathRecorder__ToBoosterToken (int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$ToBoosterToken
   System_String_o* Rotatelab_Scripts_LevelMovePathRecorder__ToBoosterToken (int32_t boosterType,
   const MethodInfo* method); */

undefined4 Rotatelab_Scripts_LevelMovePathRecorder__ToBoosterToken_10151a8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01025288 + 0x10251bc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102528c + 0x10251d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025290 + 0x10251dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025294 + 0x10251e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025298 + 0x10251f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102529c + 0x1025200));
    *pcVar3 = '\x01';
  }
  uVar1 = 0;
  switch(param_1) {
  case 1:
    puVar2 = *(undefined4 **)(&UNK_01025254 + _UNK_010252a0);
    break;
  case 2:
    puVar2 = *(undefined4 **)(&UNK_0102526c + _UNK_010252a4);
    break;
  case 3:
    puVar2 = *(undefined4 **)(&UNK_01025260 + _UNK_010252a8);
    break;
  case 4:
    puVar2 = *(undefined4 **)(&UNK_01025278 + _UNK_010252ac);
    break;
  default:
    goto LAB_01025284;
  case 9:
    puVar2 = *(undefined4 **)(_UNK_010252b0 + 0x1025284);
  }
  uVar1 = *puVar2;
LAB_01025284:
  return uVar1;
}

