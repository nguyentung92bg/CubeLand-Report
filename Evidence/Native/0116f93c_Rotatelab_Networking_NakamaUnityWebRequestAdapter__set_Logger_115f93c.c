/* IL2CPP: Rotatelab.Networking.NakamaUnityWebRequestAdapter$$set_Logger
void Rotatelab_Networking_NakamaUnityWebRequestAdapter__set_Logger (Rotatelab_Networking_NakamaUnityWebRequestAdapter_o* __this, Nakama_ILogger_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.NakamaUnityWebRequestAdapter$$set_Logger
   void Rotatelab_Networking_NakamaUnityWebRequestAdapter__set_Logger
   (Rotatelab_Networking_NakamaUnityWebRequestAdapter_o* __this, Nakama_ILogger_o* value, const
   MethodInfo* method); */

void Rotatelab_Networking_NakamaUnityWebRequestAdapter__set_Logger_115f93c(int param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0116fa00 + 0x116f954);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116fa04 + 0x116f968));
    *pcVar5 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_0116fa08 + 0x116f984) + 0xb8);
    piVar4 = (int *)0x0;
    if ((uVar3 <= *(byte *)(*param_2 + 0xb8)) &&
       (piVar4 = param_2,
       *(int *)(*(int *)(*param_2 + 100) + uVar3 * 4 + -4) != **(int **)(_UNK_0116fa08 + 0x116f984))
       ) {
      piVar4 = (int *)0x0;
    }
    *(int **)(param_1 + 0xc) = piVar4;
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (param_1 + 0xcU >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((param_1 + 0xcU & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

