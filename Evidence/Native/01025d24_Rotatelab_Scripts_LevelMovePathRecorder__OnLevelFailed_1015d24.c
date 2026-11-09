/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnLevelFailed
void Rotatelab_Scripts_LevelMovePathRecorder__OnLevelFailed (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelMovePathRecorder$$OnLevelFailed
   void Rotatelab_Scripts_LevelMovePathRecorder__OnLevelFailed (const MethodInfo* method); */

void Rotatelab_Scripts_LevelMovePathRecorder__OnLevelFailed_1015d24(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01025dcc + 0x1025d34);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025dd0 + 0x1025d48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025dd4 + 0x1025d54));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01025dd8 + 0x1025d68);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 8) != '\0') {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_LevelMovePathRecorder__AppendDockedBlasterIds_1015430
              (**(undefined4 **)(_UNK_01025ddc + 0x1025da8));
    iVar1 = *piVar4;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar3 = (char *)(_UNK_01025d18 + 0x1025ca8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01025d1c + 0x1025cbc));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01025d20 + 0x1025cd0);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar2 = *(int *)(iVar1 + 0x5c);
  if (*(char *)(iVar2 + 8) == '\0') {
    return;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *(int *)(*piVar4 + 0x5c);
  }
  *(undefined1 *)(iVar2 + 8) = 0;
  return;
}

