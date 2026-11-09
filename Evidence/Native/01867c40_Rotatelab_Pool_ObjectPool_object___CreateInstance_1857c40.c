/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$CreateInstance
Il2CppObject* Rotatelab_Pool_ObjectPool_object___CreateInstance (Rotatelab_Pool_ObjectPool_T__o* __this, const MethodInfo_1857C40* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ObjectPool<object>$$CreateInstance
   Il2CppObject* Rotatelab_Pool_ObjectPool_object___CreateInstance (Rotatelab_Pool_ObjectPool_T__o*
   __this, const MethodInfo_1857C40* method); */

undefined4 Rotatelab_Pool_ObjectPool_object___CreateInstance_1857c40(int *param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_01867ce4 + 0x1867c58);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01867ce8 + 0x1867c6c));
    *pcVar2 = '\x01';
  }
  iVar3 = param_1[4];
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_01867cec + 0x1867c94) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = UnityEngine_Object__Instantiate_object__14d4e4c
                    (iVar3,uVar1,0,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x40)
                    );
  (**(code **)(*param_1 + 0xe8))(param_1,uVar1,*(undefined4 *)(*param_1 + 0xec));
  return uVar1;
}

