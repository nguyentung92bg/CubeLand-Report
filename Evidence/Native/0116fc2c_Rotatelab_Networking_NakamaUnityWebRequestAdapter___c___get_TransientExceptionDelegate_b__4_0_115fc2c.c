/* IL2CPP: Rotatelab.Networking.NakamaUnityWebRequestAdapter.<>c$$<get_TransientExceptionDelegate>b__4_0
bool Rotatelab_Networking_NakamaUnityWebRequestAdapter___c___get_TransientExceptionDelegate_b__4_0 (Rotatelab_Networking_NakamaUnityWebRequestAdapter___c_o* __this, System_Exception_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.NakamaUnityWebRequestAdapter.<>c$$<get_TransientExceptionDelegate>b__4_0
   bool 
   Rotatelab_Networking_NakamaUnityWebRequestAdapter___c___get_TransientExceptionDelegate_b__4_0
   (Rotatelab_Networking_NakamaUnityWebRequestAdapter___c_o* __this, System_Exception_o* e, const
   MethodInfo* method); */

bool Rotatelab_Networking_NakamaUnityWebRequestAdapter___c___get_TransientExceptionDelegate_b__4_0_115fc2c
               (undefined4 param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0116fcd4 + 0x116fc40);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0116fcd8 + 0x116fc54));
    *pcVar5 = '\x01';
  }
  bVar1 = false;
  if (param_2 != (int *)0x0) {
    if (*param_2 != **(int **)(_UNK_0116fcdc + 0x116fc74)) {
      return false;
    }
    uVar3 = param_2[0x12];
    bVar1 = true;
    uVar2 = param_2[0x13];
    if ((uVar3 & uVar2) != 0xffffffff) {
      uVar4 = 0;
      if (uVar3 != 500 || uVar2 != 0) {
        uVar4 = uVar3 ^ 0x1f6;
      }
      if (uVar2 != 0 || uVar3 != 500 && uVar4 != 0) {
        return uVar2 == uVar3 < 0x1f7 && (uint)(1 < uVar3 - 0x1f7) <= uVar2 - (uVar3 < 0x1f7);
      }
    }
  }
  return bVar1;
}

