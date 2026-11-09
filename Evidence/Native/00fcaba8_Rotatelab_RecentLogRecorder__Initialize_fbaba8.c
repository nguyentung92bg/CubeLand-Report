/* IL2CPP: Rotatelab.RecentLogRecorder$$Initialize
void Rotatelab_RecentLogRecorder__Initialize (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fcad40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.RecentLogRecorder$$Initialize
   void Rotatelab_RecentLogRecorder__Initialize (const MethodInfo* method); */

void Rotatelab_RecentLogRecorder__Initialize_fbaba8(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cStack_1d;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_00fcad84 + 0xfcabbc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcad88 + 0xfcabd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcad8c + 0xfcabdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcad90 + 0xfcabe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcad94 + 0xfcabf4));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_00fcad98 + 0xfcac0c);
  uStack_1c = 0;
  cStack_1d = '\0';
  uVar1 = thunk_FUN_00f00cdc(*puVar4);
  puVar6 = *(undefined4 **)(_UNK_00fcad9c + 0xfcac30);
  UnityEngine_Application_LogCallback___ctor_35a9f20(uVar1,0,*puVar6,0);
  if (*(int *)(**(int **)(_UNK_00fcada0 + 0xfcac40) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__remove_logMessageReceivedThreaded_35a8958(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar4);
  UnityEngine_Application_LogCallback___ctor_35a9f20(uVar1,0,*puVar6,0);
  UnityEngine_Application__add_logMessageReceivedThreaded_35a8808(uVar1,0);
  piVar5 = *(int **)(_UNK_00fcada4 + 0xfcac94);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  cStack_1d = '\0';
  uStack_1c = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
  System_Threading_Monitor__Enter_2bdfb90(uStack_1c,&cStack_1d,0);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  System_Array__Clear_2b96cdc(**(undefined4 **)(iVar2 + 0x5c),0,0x14,0);
  iVar2 = *(int *)(*piVar5 + 0x5c);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  if (cStack_1d != '\0') {
    System_Threading_Monitor__Exit_2be3444(uStack_1c,0);
  }
  return;
}

