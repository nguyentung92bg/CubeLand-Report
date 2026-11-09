/* IL2CPP: Rotatelab.Scripts.SseDownloadHandler$$.ctor
void Rotatelab_Scripts_SseDownloadHandler___ctor (Rotatelab_Scripts_SseDownloadHandler_o* __this, System_Action_string__o* onPayload, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SseDownloadHandler$$.ctor
   void Rotatelab_Scripts_SseDownloadHandler___ctor (Rotatelab_Scripts_SseDownloadHandler_o* __this,
   System_Action_string__o* onPayload, const MethodInfo* method); */

void Rotatelab_Scripts_SseDownloadHandler___ctor_105bd38(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0106be48 + 0x106bd50);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106be4c + 0x106bd64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106be50 + 0x106bd70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106be54 + 0x106bd7c));
    *pcVar6 = '\x01';
  }
  piVar3 = (int *)System_Text_Encoding__get_UTF8_2a278d0(0);
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar3 + 0x1b8))(piVar3,*(undefined4 *)(*piVar3 + 0x1bc));
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    thunk_FUN_00ec5080();
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106be58 + 0x106bdcc));
    System_Text_StringBuilder___ctor_2a14a04(uVar4,0);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar4);
    uVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_0106be5c + 0x106bdfc),0x2000);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_00ec5080();
    uVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_0106be60 + 0x106be20),0x2000);
    UnityEngine_Networking_DownloadHandlerScript___ctor_39e7680(param_1,uVar4,0);
    puVar5 = (undefined4 *)(param_1 + 0x14);
    *puVar5 = param_2;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

