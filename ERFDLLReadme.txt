ERFViewer.dll 

Version 1.0      


Function List: 


	public int GetLOD(string fileName)
		returns the Number of LOD (Levels of Detail).

        public int GetNumOfMesh(string fileName, int lod)
		returns the number of models in the level requested.

        public int GetNumOfVert(string fileName, int lod, int mesh)
		returns the number of Verties in the model in the level requested.

        public float [,] GetVert(string fileName, int lod, int mesh)
		returns the vertices in a 3 index array (x,y,Z)-> in the model/level

        public float[,] GetUV(string fileName, int lod, int mesh)
		returns the UV points in a 2 index arrary (u,V) -> in the model/level

        public int GetNumOfIndexes(string fileName, int lod, int mesh)
		returns the number of vert indexes in the file (Note: this number has been /3)

        public float[,] GetIndexs(string fileName, int lod, int mesh)
		returns the Indexs in a 3 index array(1st,2nd,3rd)

        public float[,] GetPlanePoints(string fileName, int lod, int mesh)
		returns the plane points in a 4 index arrary (1,2,3,4)

        public float[,] GetNormalPoints(string fileName, int lod, int mesh)
		returns the normals in a 3 index arrary (x,y,z)


Version 1.1
	
	Added 

	public float[] GetHeader(string fileName)
		returns the header data for the file in an array
		Array[0] = usually 14
		Array[1] = usually 144 
		Array[2] = usually 5
		Array[3] = X Parent point
		Array[4] = Y Parent Point
		Array[5] = Z Parent Point
		Array[6] = Vector value of Parent points

	public float[] GetMinMaxDist(string fileName, int lod)
		returns the Minimum and max distance in the level of detail
		Array[0] = Minimum distance
		Array[1] = Max distance
