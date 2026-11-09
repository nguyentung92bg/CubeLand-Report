/* IL2CPP: Rotatelab.Boosters.CannonRig$$.cctor
void Rotatelab_Boosters_CannonRig___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$.cctor
   void Rotatelab_Boosters_CannonRig___cctor (const MethodInfo* method); */

void Rotatelab_Boosters_CannonRig___cctor_1134e58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01144ed8 + 0x1144e68);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144edc + 0x1144e7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144ee0 + 0x1144e88));
    *pcVar5 = '\x01';
  }
  uVar3 = UnityEngine_Shader__PropertyToID_35c3e0c(**(undefined4 **)(_UNK_01144ee4 + 0x1144ea0),0);
  uVar2 = _UNK_01144ed0;
  uVar1 = _UNK_01144ec8;
  puVar4 = *(undefined4 **)(**(int **)(_UNK_01144ee8 + 0x1144eb0) + 0x5c);
  *puVar4 = uVar3;
  *(undefined8 *)(puVar4 + 1) = uVar1;
  *(undefined8 *)(puVar4 + 3) = uVar2;
  return;
}

