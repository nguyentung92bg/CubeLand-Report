/* IL2CPP: Rotatelab.Audio.AudioGroup$$PickClip
UnityEngine_AudioClip_o* Rotatelab_Audio_AudioGroup__PickClip (Rotatelab_Audio_AudioGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioGroup$$PickClip
   UnityEngine_AudioClip_o* Rotatelab_Audio_AudioGroup__PickClip (Rotatelab_Audio_AudioGroup_o*
   __this, const MethodInfo* method); */

int Rotatelab_Audio_AudioGroup__PickClip_108cbac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_0109ccf8 + 0x109cbc4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ccfc + 0x109cbd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109cd00 + 0x109cbe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109cd04 + 0x109cbf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109cd08 + 0x109cbfc));
    *pcVar4 = '\x01';
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_0109cd0c + 0x109cc10) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__PickRandom_object__1487798
                    (uVar5,**(undefined4 **)(_UNK_0109cd10 + 0x109cc30));
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar5 = UnityEngine_Object__get_name_36081bc(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Object__get_name_36081bc(iVar1,0);
    uStack_1c = UnityEngine_Time__get_time_3610900(0);
    uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_0109cd14 + 0x109cc8c) + 0x3c),&uStack_1c);
    uVar5 = System_String__Format_2a0c2b4
                      (**(undefined4 **)(_UNK_0109cd18 + 0x109ccb4),uVar5,uVar2,uVar3,0);
    if (*(int *)(**(int **)(_UNK_0109cd1c + 0x109cccc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__Log_35b1d80(uVar5,param_1,0);
  }
  return iVar1;
}

